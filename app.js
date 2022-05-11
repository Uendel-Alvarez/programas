
var http= require('http');
var url = require('url')
var fs = require('fs');

function readFile(response, file){

    fs.readFile(file, function(err, data) {
        response.end(data);
    });
}
function callback(request, response){
    response.writeHead(200, {"Content-Type": "application/json; charset=utf-8"});
    var parts = url.parse(request.url);
    if(path == '/carros/classicos'){
        readFile(response, "carros_classicos.json");
    }else if(path == '/carros/esportivos'){
        readFile(response, "carros_esportivos.json");
    }else if(path == '/carros/luxo'){
        readFile(response, "carros_luxo.json");
    }else {
        response.end("Path não mapeado: " + path);
    }
}
//criação do servidor
var server = http.createServer(callback);
server.listen(3000);
console.log("Servidor teve inicio, está operando corretamente! em http://localhost:3000/");

