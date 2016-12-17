---
title: "Allineamento (dichiarazioni C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
ms.assetid: a986d510-ccb8-41f8-b905-433df9183485
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Allineamento (dichiarazioni C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una delle funzionalità di basso livello di C\+\+ è costituita dalla possibilità di specificare l'allineamento preciso degli oggetti in memoria per sfruttare al massimo una specifica architettura hardware.  Per impostazione predefinita, il compilatore consente di allineare i membri di classe e struct in base al relativo valore di dimensione: bool e char vengono allineati in base a limiti di un byte, short di due byte, int di quattro byte e infine long, double e long double in base a limiti di otto byte.  Nella maggior parte degli scenari è necessario preoccuparsi dell'allineamento in quanto quello predefinito è già ottimale.  In alcuni casi, tuttavia, è possibile ottenere miglioramenti significativi in termini di prestazioni o di risparmio di memoria specificando un allineamento personalizzato per le strutture dei dati.  Prima di Visual Studio 2015 era possibile usare le parole chiave specifiche di Microsoft \_\_alignof e declspec\(alignas\) per specificare un allineamento maggiore rispetto a quello predefinito.  A partire da Visual Studio 2015 è invece consigliabile usare le parole chiave standard di C\+\+11 [alignof e alignas](../cpp/alignof-and-alignas-cpp.md) per ottenere la massima portabilità del codice.  Le nuove parole chiave si comportano in modo analogo alle estensioni specifiche di Microsoft e la documentazione di tali estensioni è valida anche per le nuove parole chiave.  Per altre informazioni, vedere [Operatore \_\_alignof](../cpp/alignof-operator.md) e [align](../cpp/align-cpp.md).  Lo standard C\+\+ non specifica il comportamento di trasporto per l'allineamento in base a limiti inferiori rispetto a quelli predefiniti del compilatore per la piattaforma di destinazione, di conseguenza in tale caso è comunque necessario usare la direttiva \#pragma [pack](../preprocessor/pack.md) di Microsoft.  
  
 La libreria standard C\+\+ fornisce la [Classe aligned\_storage](../standard-library/aligned-storage-class.md) per l'allocazione della memoria per strutture dei dati con allineamenti personalizzati e la [Classe aligned\_union](../standard-library/aligned-union-class.md) per la specifica dell'allineamento in caso di unione con costruttori o distruttori non semplici.  
  
## Informazioni sull'allineamento  
 Per allineamento si intende una proprietà di un indirizzo di memoria, espresso come modulo di indirizzo numerico di una potenza di 2.  Ad esempio, il modulo 4 dell'indirizzo 0x0001103F è 3 e si dice che tale indirizzo è allineato a 4n\+3, dove 4 indica la potenza di 2 scelta.  L'allineamento di un indirizzo dipende dalla potenza di 2 scelta.  Il modulo 8 dello stesso indirizzo è 7.  Si dice che un indirizzo è allineato a X se il relativo allineamento è Xn\+0.  
  
 Le CPU eseguono le istruzioni che agiscono su dati archiviati in memoria e i dati sono identificati dai relativi indirizzi in memoria.  Oltre all'indirizzo, un dato è dotato anche di una dimensione.  Un dato è allineato naturalmente se il relativo indirizzo è allineato alle dimensioni; in caso contrario, non è allineato.  Ad esempio, un dato a virgola mobile a 8 byte è allineato naturalmente se l'indirizzo usato per identificarlo è allineato a 8.  
  
 Gestione dell'allineamento dei dati con il compilatore I compilatori di dispositivi provano ad allocare i dati in modo da evitare disallineamenti.  
  
 Per i tipi di dati semplici il compilatore assegna indirizzi che sono multipli delle dimensioni in byte del tipo di dati.  Di conseguenza, il compilatore assegna indirizzi a variabili di tipo long che sono multipli di 4, impostando gli ultimi due bit dell'indirizzo su zero.  
  
 Il compilatore aggiunge inoltre elementi di spaziatura interna nelle strutture in modo da allinearne naturalmente i singoli elementi.  Si consideri la struttura struct x\_ nell'esempio di codice seguente:  
  
```  
struct x_  
{  
   char a;     // 1 byte  
   int b;      // 4 bytes  
   short c;    // 2 bytes  
   char d;     // 1 byte  
} MyStruct;  
  
```  
  
 Il compilatore aggiunge elementi di spaziatura interna in questa struttura in modo applicare naturalmente l'allineamento.  
  
 L'esempio di codice seguente illustra in che modo il compilatura inserisce la struttura con elementi di spaziatura interna in memory:Copy  
  
```  
// Shows the actual memory layout  
struct x_  
{  
   char a;            // 1 byte  
   char _pad0[3];     // padding to put 'b' on 4-byte boundary  
   int b;            // 4 bytes  
   short c;          // 2 bytes  
   char d;           // 1 byte  
   char _pad1[1];    // padding to make sizeof(x_) multiple of 4  
}  
  
```  
  
1.  Entrambe le dichiarazioni restituiscono 12 byte per sizeof\(struct x\_\).  
  
2.  La seconda dichiarazione include due elementi di spaziatura interna:  
  
3.  char \_pad0\[3\] per allineare il membro int b in base a un limite di 4 byte  
  
4.  char \_pad1\[1\] per allineare gli elementi della matrice della struttura struct \_x bar\[3\];  
  
5.  Grazie alla spaziatura interna gli elementi di bar\[3\] vengono allineati in modo da consentire l'accesso naturale.  
  
 L'esempio di codice seguente illustra il layout della matrice bar\[3\]:  
  
```  
adr offset   element  
------   -------  
0x0000   char a;         // bar[0]  
0x0001   char pad0[3];  
0x0004   int b;  
0x0008   short c;  
0x000a   char d;  
0x000b   char _pad1[1];  
  
0x000c   char a;         // bar[1]  
0x000d   char _pad0[3];  
0x0010   int b;  
0x0014   short c;  
0x0016   char d;  
0x0017   char _pad1[1];  
  
0x0018   char a;         // bar[2]  
0x0019   char _pad0[3];  
0x001c   int b;  
0x0020   short c;  
0x0022   char d;  
0x0023   char _pad1[1];  
  
```  
  
## Vedere anche  
 [Allineamento di strutture dei dati](http://en.wikipedia.org/wiki/Data_structure_alignment)