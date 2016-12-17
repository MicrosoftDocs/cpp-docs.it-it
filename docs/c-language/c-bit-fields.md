---
title: "Campi di bit C | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "campi di bit"
  - "campi di bit"
ms.assetid: 9faf74c4-7fd5-4b44-ad18-04485193d06e
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Campi di bit C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In aggiunta alle dichiarazioni dei membri di una struttura o unione, una dichiarazione di struttura può anche essere un numero specificato di bit, chiamato "campo di bit". Per il nome del campo, la sua lunghezza viene impostata fuori dal dichiaratore tramite due punti.  Un campo di bit viene interpretato come un tipo intero.  
  
## Sintassi  
 *dichiaratore\-struct*:  
 *Dichiaratori*  
  
 *dichiaratore del tipo specificato*  opt **:** *constant\-expression*  
  
 L'*espressione costante* specifica la lunghezza nel campo in bit.  Il *tipo* per il `declarator` deve essere `unsigned int`, **signed int**, o `int`, e l'*espressione costante* deve essere un valore intero non negativo.  Se il valore è zero, la dichiarazione non ha un `declarator`.  Array di campi di bit, puntatori a campi di bit, e funzioni restituenti campi di bit non sono ammessi.  Il `declarator` opzionale da il nome al campo di bit.  I campi di bit possono essere dichiarati come parte di una struttura.  L'operatore address\-of \(**&**\) non può essere applicato alle componenti di un campo di bit.  
  
 Campi di bit senza nome non possono essere referenziati, ed il loro contenuti non è prevedibile a runtime.  Possono essere usati come campi "dummy", per scopi di allineamento.  Un campo di bit senza nome per cui la lunghezza specificata è 0 garantisce che l'archiviazione per il membro a seguire nella *struct\-declaration\-list* inizia con un limite `int`.  
  
 I campi di bit devono anche essere lunghi abbastanza da contenere il pattern di bit.  Ad esempio, questi due istruzioni non sono legittime:  
  
```  
short a:17;        /* Illegal! */  
int long y:33;     /* Illegal! */  
```  
  
 Questo esempio definisce una array bi\-dimensionale di strutture chiamato `screen`.  
  
```  
struct   
{  
    unsigned short icon : 8;  
    unsigned short color : 4;  
    unsigned short underline : 1;  
    unsigned short blink : 1;  
} screen[25][80];  
```  
  
 L'array contiene 2.000 elementi.  Ogni elemento è un struttura individuale contenente quattro membri di tipo campo di bit: `icon`, `color`, `underline`, e `blink`.  La dimensione di ogni struttura è di due byte.  
  
 I campi di bit hanno la stessa semantica dei tipi interi.  Questo significa che un campo di bit è usato nelle espressione nello stesso modo in cui una variabile dello stesso tipo di base verrebbe usata, senza riguardo a quanti bit vi siano nel campo.  
  
 **Specifici di Microsoft**  
  
 Campi di bit definiti come `int` vengono trattati come interi con segno.  Una estensione Microsoft allo standard ANSI C permette i tipi `char` e **long** \(entrambi **signed** e `unsigned`\) per i campi di bit.  Campi di bit senza nomi con tipo base **long**, **short**, o `char` \(**signed** or `unsigned`\) forzano l'allineamento ad un limite appropriato al tipo base.  
  
 I campi di bit sono allocati dentro un intero dal bit meno significativo a quello più significativo.  Nel codice seguente  
  
```  
struct mybitfields  
{  
    unsigned short a : 4;  
    unsigned short b : 5;  
    unsigned short c : 7;  
} test;  
  
int main( void );  
{  
    test.a = 2;  
    test.b = 31;  
    test.c = 0;  
}  
```  
  
 i bit sarebbero arrangiati come segue:  
  
```  
00000001 11110010  
cccccccb bbbbaaaa  
```  
  
 Dato che la famiglia di processori 8086 memorizza il low byte dei valori interi prima dell'high byte, l'intero `0x01F2` sopra sarebbe memorizzato nella memoria fisica come `0xF2` seguito da `0x01`.  
  
 **Specifica END Microsoft**  
  
## Vedere anche  
 [Dichiarazioni di struttura](../c-language/structure-declarations.md)