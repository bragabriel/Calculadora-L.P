$(document).ready(function(){

   $("#botao").click(function(){
      var valor1 = parseInt($("#n1").val());
      var valor2 = parseInt($("#n2").val());
      var operacao = $("#operacao").val();

      if(valor1 == "" || valor2 == ""){
        alert("Preencha os campos!");
      }

      else{
        if(operacao == "+") {
          var result = valor1 + valor2;
        }
        else if (operacao == "-") {
          var result = valor1 - valor2;
        }
        else if (operacao == "*") {
          var result = valor1 * valor2;
        }
        else {
          var result = valor1 / valor2;
        }
        alert("O resultado é: " + result);
      }
  });

});
