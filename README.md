
        <h1>Validação de RG em C++</h1>
        <p>Este projeto implementa um programa simples em C++ para validar números de RG (Registro Geral), um documento de identificação utilizado no Brasil.</p>
        
        <h2>Funcionalidades</h2>
        <ul>
            <li><strong>Entrada do Usuário:</strong> O programa solicita ao usuário que insira seu RG no formato <code>XX.XXX.XXX-X</code>.</li>
            <li><strong>Validação de Formato:</strong> Verifica se o RG possui o comprimento correto de 12 caracteres.</li>
            <li><strong>Cálculo do Dígito Verificador:</strong> Calcula o dígito verificador a partir dos nove primeiros dígitos do RG, utilizando um algoritmo de multiplicação por valores decrescentes de 9 a 1.</li>
            <li><strong>Suporte para Dígito Verificador 'X':</strong> Trata o dígito verificador 'X' como equivalente ao número 10.</li>
            <li><strong>Verificação de Validade:</strong> Compara o resultado do cálculo com o dígito verificador informado e indica se o RG é válido ou inválido.</li>
        </ul>
        
        <h2>Exemplo de Uso</h2>
        <p>Siga os passos abaixo para compilar e executar o programa:</p>
        <ol>
            <li>Compile o código com um compilador C++:</li>
            <pre><code>g++ validacao_rg.cpp -o validacao_rg</code></pre>
            <li>Execute o programa:</li>
            <pre><code>./validacao_rg</code></pre>
            <li>Insira um RG no formato <code>XX.XXX.XXX-X</code> quando solicitado.</li>
            <li>O programa exibirá se o RG é válido ou inválido.</li>
        </ol>
        
        <h2>Requisitos</h2>
        <p>Para executar o programa, você precisará de um compilador C++ (g++, clang++, etc.).</p>
        
        <h2>Estrutura do Código</h2>
        <p>O código principal está no arquivo <code>validacao_rg.cpp</code>. Ele contém:</p>
        <ul>
            <li>Entrada do RG pelo usuário.</li>
            <li>Extração e processamento dos dígitos do RG.</li>
            <li>Cálculo e validação do dígito verificador.</li>
        </ul>
        
        <h2>Contribuição</h2>
        <p>Sinta-se à vontade para fazer um fork deste projeto e enviar pull requests. Sugestões e melhorias são sempre bem-vindas.</p>
       

