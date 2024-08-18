<h1>Validador de CPF em C++</h1>
Este projeto é um programa simples em C++ que valida e determina a localidade de um número de CPF (Cadastro de Pessoas Físicas) brasileiro. O CPF deve ser inserido pelo usuário no formato 000.000.000-00.

<h2>Funcionalidades</h2>
<ul>
<li>Validação do CPF: O programa verifica se o CPF fornecido é válido, com base nos dois dígitos verificadores.</li>
<li>Determinação da Localidade: Caso o CPF seja válido, o programa identifica e exibe a região do Brasil onde o CPF foi registrado, com base no penúltimo dígito do CPF.</li>
</ul>

<h2>Requisitos</h2>
Compilador C++: Este projeto foi desenvolvido e testado no C++ Builder do Embarcadero, mas deve funcionar em qualquer ambiente C++ que suporte a biblioteca padrão e manipulação básica de strings.
<h2>Como Usar</h2>
<ol>
Clonar o repositório:
<l1>git clone https://github.com/YinBits/CPF-Verifier.git</li>
<li>Compilar o código:
Abra o projeto no C++ Builder ou use o seu compilador C++ de preferência.</li>
<li>Compile o arquivo CPF_Verifier.cpp.</l1>
<li>Executar o programa:

Ao executar o programa, você será solicitado a inserir um CPF no formato 000.000.000-00.
O programa validará o CPF e, se for válido, exibirá a localidade correspondente.</li>
Exemplo de Uso
Ao executar o programa, a seguinte interação pode ocorrer:

Digite seu CPF (formato 000.000.000-00): 123.456.789-09
CPF VÁLIDO
A localidade do CPF é: São Paulo

Se o CPF for inválido:
Digite seu CPF (formato 000.000.000-00): 123.456.789-00
CPF INVÁLIDO
IMPOSSÍVEL LOCALIZAR CPF INVÁLIDO
</li>

<h2>Estrutura do Código</h2>
CPF_Verifier.cpp: Contém toda a lógica para validação do CPF e determinação da localidade.

<h2>Contribuindo</h2>
Contribuições são bem-vindas! Sinta-se à vontade para enviar um pull request ou abrir uma issue para sugestões de melhorias.
