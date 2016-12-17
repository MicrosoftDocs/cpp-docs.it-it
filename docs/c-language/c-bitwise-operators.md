---
title: "Operatori bit per bit C | Microsoft Docs"
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
  - "& (operatore), bit per bit (operatori)"
  - "^ (operatore)"
  - "^ (operatore), bit per bit (operatori)"
  - "| (operatore), bit per bit (operatori)"
  - "e commerciale (operatore) (&)"
  - "AND (operatore)"
  - "bit per bit (operatori)"
  - "bit per bit (operatori), Visual C"
  - "operatori [C], bit per bit"
ms.assetid: e22127b1-9a2d-4876-b01d-c8f72cec3317
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori bit per bit C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operatori bit a bit eseguono AND bit a bit \(**&**\), OR\-esclusivo bit a bit \(**^**\) e OR\-inclusivo bit a bit \(       **&#124;** \)operazioni.  
  
 **Sintassi**  
  
 *espressione\-AND*:  
 *Espressioni di uguaglianza*  
  
 *espressione\-AND* **&**  *espressione di uguaglianza*  
  
 *espressione\-OR\-esclusivo*:  
 *Espressione\-AND*  
  
 *espressione\-OR\-esclusivo*  **^**  *espressione\-AND*  
  
 *espressione OR\-inclusivo*:  
 *espressione\-OR\-esclusivo*  
  
 *espressione\-OR\-inclusivo* &#124; *espressione\-OR\-esclusivo*  
  
 Gli operandi degli operatori bit a bit devono avere tipo integral, ma il loro tipi possono essere diversi.  Questi operatori eseguono le consuete conversioni aritmetiche; il tipo del risultato è il tipo degli operandi dopo la conversione.  
  
 Gli operatori bit a bit del C sono descritti di seguito:  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|**&**|L'operatore AND bit a bit confronta ogni frammento del primo operando con il corrispondente bit del secondo operando.  Se entrambi i bit sono a 1 , il corrispondente bit risultato viene impostato a 1.  In caso contrario, il bit corrispondente al risultato viene impostato a 0.|  
|**^**|L'operatore OR\-esclusivo bit a bit confronta ogni bit del primo operando con il corrispondente bit del secondo operando.  Se un bit è 0 e l'altro bit è 1, il bit corrispondente al risultato viene impostato a 1.  In caso contrario, il bit corrispondente al risultato viene impostato a 0.|  
|**&#124;**|L'operatore bit a bit OR\-inclusivo confronta ogni bit del primo operando con il corrispondente bit del secondo operando.  Se uno dei bit è 1, il bit corrispondente al risultato viene impostato a 1.  In caso contrario, il bit corrispondente al risultato viene impostato a 0.|  
  
## Esempi  
 Queste dichiarazioni vengono utilizzate per i tre esempi seguenti:  
  
```  
short i = 0xAB00;  
short j = 0xABCD;  
short n;  
  
n = i & j;  
```  
  
 Il risultato assegnato a `n` in questo primo esempio è lo stesso `i` \(0xAB00 esadecimale\).  
  
```  
n = i | j;  
  
n = i ^ j;  
```  
  
 L'OR inclusivo bit a bit nel secondo esempio risulta nel valore 0xABCD \(esadecimale\), mentre l'OR esclusivo bit a bit nel terzo esempio produce esadecimale 0xCD \(esadecimale\).  
  
 **Specifici di Microsoft**  
  
 Il risultato di un'operazione bit a bit sugli interi con segno è definito dal compilatore in base allo standard ANSI C.  Per il compilatore C di Microsoft, le operazioni bit a bit sugli interi con segno funzionano allo stesso modo delle operazioni bit a bit sugli interi senza segno.  Ad esempio, `-16 & 99` può essere espresso binario come  
  
```  
  11111111 11110000  
& 00000000 01100011  
  _________________  
  00000000 01100000  
```  
  
 Il risultato dell' AND bit a bit è il decimale 96.  
  
 **Specifica END Microsoft**  
  
## Vedere anche  
 [Operatore AND bit per bit: &](../cpp/bitwise-and-operator-amp.md)   
 [Operatore OR bit per bit esclusivo: ^](../cpp/bitwise-exclusive-or-operator-hat.md)   
 [Operatore OR bit per bit inclusivo: &#124;](../cpp/bitwise-inclusive-or-operator-pipe.md)