---
title: "Passaggio alle etichette in assembly inline | Microsoft Docs"
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
  - "__asm (parola chiave) [C++], etichette"
  - "distinzione tra maiuscole e minuscole, etichette in assembly inline"
  - "assembly inline, passaggio alle etichette"
  - "passaggio alle etichette in assembly inline"
  - "etichette, blocchi __asm"
  - "etichette, assembly inline"
ms.assetid: 36c18b97-8981-4631-9dfd-af6c14a04297
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Passaggio alle etichette in assembly inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Come un'etichetta C o C\+\+ comune, un'etichetta in un blocco `__asm` ha un ambito nella funzione in cui è definita \(non solo nel blocco\).  Sia le istruzioni di assembly che le istruzioni `goto` possono passare alle etichette all'interno o all'esterno del blocco `__asm`.  
  
 Nelle etichette definite in blocchi `__asm` non viene fatta distinzione tra maiuscole e minuscole; sia le istruzioni `goto` che le istruzioni di assembly possono fare riferimento a tali etichette senza tale distinzione.  Nelle etichette C\+\+ e C viene fatta distinzione tra maiuscole e minuscole solo se utilizzate dalle istruzioni `goto`.  Le istruzioni di assembly possono passare a un'etichetta C o C\+\+ senza fare distinzione tra maiuscole e minuscole.  
  
 Il codice seguente illustra tutte le permutazioni:  
  
```  
void func( void )  
{  
   goto C_Dest;  /* Legal: correct case   */  
   goto c_dest;  /* Error: incorrect case */  
  
   goto A_Dest;  /* Legal: correct case   */  
   goto a_dest;  /* Legal: incorrect case */  
  
   __asm  
   {  
      jmp C_Dest ; Legal: correct case  
      jmp c_dest ; Legal: incorrect case  
  
      jmp A_Dest ; Legal: correct case  
      jmp a_dest ; Legal: incorrect case  
  
      a_dest:    ; __asm label  
   }  
  
   C_Dest:       /* C label */   
   return;  
}  
int main()  
{  
}  
```  
  
 Non utilizzare nomi delle funzioni della libreria C come etichette in blocchi `__asm`.  Ad esempio, si potrebbe essere tentati di utilizzare `exit` come etichetta, come segue:  
  
```  
; BAD TECHNIQUE: using library function name as label  
jne exit  
   .  
   .  
   .  
exit:  
   ; More __asm code follows  
```  
  
 Poiché **exit** è il nome della funzione di libreria C, questo codice potrebbe causare un passaggio alla funzione **exit** anziché nella posizione desiderata.  
  
 Come nei programmi MASM, il simbolo di dollaro \(`$`\) serve come contatore di posizione corrente.  È un'etichetta per l'istruzione al momento assemblata.  Nei blocchi `__asm`, l'uso principale è di eseguire passaggi condizionali lunghi:  
  
```  
jne $+5 ; next instruction is 5 bytes long  
jmp farlabel  
; $+5  
   .  
   .  
   .  
farlabel:  
```  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)