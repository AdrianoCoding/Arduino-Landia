# Abrindo o arquivo .ino na IDE e transferindo para o Arduino

1. Abra a IDE do Arduino em seu sistema.
2. No menu da IDE, clique em "File" (ou "Arquivo") e selecione a opção "Open" (ou "Abrir").
3. Navegue até a pasta onde você extraiu o repositório baixado.
4. Selecione o arquivo `.ino` correspondente ao projeto que você deseja executar e clique em "Open" (ou "Abrir").
5. O código-fonte do projeto será exibido na janela da IDE.
6. Conecte seu Arduino ao computador usando um cabo USB.
7. No menu da IDE, selecione a placa correta e a porta serial correspondente ao seu Arduino. Essas opções estão disponíveis nos menus "Tools" (ou "Ferramentas") > "Board" (ou "Placa") e "Tools" (ou "Ferramentas") > "Port" (ou "Porta").
8. Clique no botão "Upload" (ou "Enviar") na parte superior da janela da IDE para compilar e transferir o programa para o Arduino.
9. Aguarde até que o processo de upload seja concluído e observe a saída na parte inferior da janela da IDE para verificar se não houve erros.
10. Após o upload ser concluído com sucesso, o programa será executado no Arduino.

# Requisitos
1: Arduino (UNO de preferência)
3: LED's de alto brilho (verde, amarelo e vermelho)
3: Resistores
1: Protoboard (Placa de ensaio - OPCIONAL)
- Jumpers, para interligar os leds com o arduino

# Etapa 1: Conexões básicas

![image](https://github.com/sudoshift/Arduino-Landia/assets/70298185/a77cf841-d7c9-44a8-9cf7-a6b2b5323a90)


Encaixe os leds nas posições desejada, se atetando para o lado positivo e negativo, que pode ser demarcado pelas "perninhas" do led, perninha mais longa é a positiva, e a menor, negativa !
- Ao encaixar o primeiro led na protoboard, use um dos resistores na mesma linha vertical da protoboard (Placa de ensaio), indo da linha vertical que está o led até um próximo "furinho", de forma que fique organizado, *se atente em ser da mesma linha vertical*

- Faça isto com os outros leds, até você ter algo semelhante a isto:
![image](https://github-production-user-asset-6210df.s3.amazonaws.com/70298185/242624846-fb5e9914-eb43-4d63-8eb8-3b465ba57dea.png)

# Etapa 2: Primeira conexão com o arduino
1. Pegue um jumper, de prêferencia com a cor PRETA, procure o pino com o nome: GND no arduino, espete-o no mesmo
![image](https://github.com/sudoshift/Arduino-Landia/assets/70298185/fa14a2f9-afcf-4ddf-878c-2f628d59605e)
2. Encaixe no primeiro furinho da linha negativa da protoboard (Placa de ensaio)
![image](https://github.com/sudoshift/Arduino-Landia/assets/70298185/0723b9cc-761a-459c-8fbf-954edd6dc224)
<p aligh="center"> Você terá algo como isto</p>
![image](https://github.com/sudoshift/Arduino-Landia/assets/70298185/13e95b14-0bc4-4727-b33b-c77965a13296)
</p>

# Etapa 3: Conectando os leds no arduino
- Aqui, precisamos de um pouco mais de atenção, pois será aqui que você irá escolher as portas que o arduino usará para trabalhar
1. Pega 3 jumpers, de preferência: VERDE, AMARELO e VERMELHO, e espete um em cada furinho do lado que não tem o resistor no led, siga o exemplo a baixo
![image](https://github.com/sudoshift/Arduino-Landia/assets/70298185/5b67e820-a0f4-4cef-ab2b-858ccab66302)
2. No arduino, encaixe os cabos,nestas seguintes portas:
VERMELHO:  PORTA DIGITAL 13
AMARELO: PORTA DIGITAL 12
VERDE: PORTA DIGIAL 8
__(Por que ir direto para a porta 8 e não para a ~11 ?__ 
As portas que o número inicia com "~", significa que elas possuem o recurso: PWM, estes, possuem uma saida analogica, sendo possivel controlar o brilho do led, neste caso, não queremos controlar o brilho do led, e sim, ligar ele em toda potência.

![image](https://github.com/sudoshift/Arduino-Landia/assets/70298185/e53f7d91-3060-4b28-adb5-939f2241e5bc)


# Pronto  

com tudo feito da maneira explicado, temos algo semelhante a isto:
![image](https://github.com/sudoshift/Arduino-Landia/assets/70298185/7401e81c-e6f9-423a-8f8e-b6c5ea219a48)

Faça o upload do script semaforo.ino que se encontra nesta pasta, ao arduino

# Fim :)
