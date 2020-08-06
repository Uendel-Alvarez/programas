<?php
header("Content-type: text/html; charset=utf-8");
$prova1=6;
$prova2=8;
$prova3=10;
$prova4=3;
$media($prova1+$prova2+$prova3+$prova4)/4;
if($media>=7){
echo("Você foi aprovado e sua nota final foi $media ");
}else{
echo("Você foi reprovado e sua nota final foi $media ");
}
?>
