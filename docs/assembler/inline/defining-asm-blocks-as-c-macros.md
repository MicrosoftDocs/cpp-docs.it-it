---
title: "Definizione di blocchi __asm come macro C | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__asm (parola chiave) [C++], as (macro C)"
  - "macro, __asm (blocchi)"
  - "Visual C, macro"
ms.assetid: 677ba11c-21c8-4609-bba7-cd47312243b0
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Definizione di blocchi __asm come macro C
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 C macro offrono un modo pratico per inserire il codice assembly nel codice sorgente, ma richiedono particolare attenzione perché una macro si espande in una riga logica.  Per creare le macro senza problemi, seguire queste regole:  
  
-   Racchiudere il  `__asm`blocco nel graffe.  
  
-   Inserire il  `__asm`parola chiave prima di ogni istruzione assembly.  
  
-   Utilizzare i commenti C obsoleto \(  `/* comment */`\) anziché commenti stile assembly \(   `; comment`\) o commenti a riga singola C \(   `// comment`\).  
  
 Per illustrare, l'esempio seguente definisce una semplice macro:  
  
```  
#define PORTIO __asm      \  
/* Port output */         \  
{                         \  
   __asm mov al, 2        \  
   __asm mov dx, 0xD007   \  
   __asm out dx, al       \  
}  
```  
  
 A prima vista, gli ultimi tre  `__asm`parole chiave sembrano superflui.  Tuttavia, esse sono necessarie perché la macro si espande in un'unica riga:  
  
```  
__asm /* Port output */ { __asm mov al, 2  __asm mov dx, 0xD007 __asm out dx, al }  
```  
  
 Il terzo e quarto  `__asm`parole chiave sono necessarie come separatori di istruzione.  I separatori di istruzione riconosciuti in  `__asm`i blocchi sono il carattere di nuova riga e  `__asm`parola chiave.  Poiché un blocco definito come una macro è una riga logica, è necessario separare ciascuna istruzione con  `__asm`.  
  
 Anche le parentesi graffe sono essenziali.  Se vengono omessi, il compilatore può essere confusa da C o C\+\+ istruzioni sulla stessa riga a destra della chiamata di macro.  Senza parentesi graffa di chiusura, il compilatore non è in grado di riconoscere quale codice assembly si interrompe e si vede C o C\+\+ istruzioni la  `__asm`blocco di istruzioni in linguaggio assembly.  
  
 Commenti stile assembly che iniziano con un punto e virgola \(**;**\) proseguono fino alla fine della riga.  Ciò può causare problemi nelle macro perché il compilatore ignora tutto dopo il commento, fino alla fine della riga logica.  Lo stesso vale per commenti a riga singola C o C\+\+ \(  `// comment`\).  Per evitare errori, utilizzare i commenti C obsoleto \(  `/* comment */`\) in  `__asm`blocchi definiti come macro.  
  
 Un  `__asm`blocco scritto come una macro C può accettare argomenti.  A differenza di una normale macro C, tuttavia, un  `__asm`macro non può restituire un valore.  Tale macro può essere utilizzata nelle espressioni di C o C\+\+.  
  
 Prestare attenzione a non richiamare le macro di questo tipo indiscriminato.  Ad esempio, richiamare una macro di linguaggio assembly in una funzione dichiarata con la  `__fastcall`convenzione può causare risultati imprevisti.  \(Vedere  [utilizzo e conservazione dei registri in Assembly Inline](../../assembler/inline/using-and-preserving-registers-in-inline-assembly.md).\)  
  
 **FINE specifico di Microsoft**  
  
## Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)