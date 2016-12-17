---
title: ".MODEL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - ".MODEL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".MODEL directive"
ms.assetid: 057f00df-1515-4c55-852a-d936c8a34b53
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .MODEL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inizializza il modello di memoria del programma.  
  
## Sintassi  
  
```  
.MODEL memorymodel [[, langtype]] [[, stackoption]]  
```  
  
#### Parametri  
 `memorymodel`  
 Parametro obbligatorio che determina la dimensione dei puntatori a codice e dati.  
  
 `langtype`  
 Parametro facoltativo che consente di impostare le convenzioni di chiamata e di denominazione per le procedure e i simboli pubblici.  
  
 `stackoption`  
 Parametro facoltativo.  
  
 `stackoption`is not used if `memorymodel` is `FLAT`.  
  
 Specifica di `NEARSTACK` il segmento dello stack vengono raggruppati in un unico segmento fisico \(`DGROUP`\) insieme ai dati.  Lo stack di registri di segmento \(`SS`\) viene utilizzata per contenere lo stesso indirizzo di registro di segmento di dati \(`DS`\).  `FARSTACK`non raggruppare stack con `DGROUP`; In questo modo `SS` non è uguale a `DS`.  
  
## Note  
 .`MODEL`non è utilizzato in [MASM for x64 \(ml64.exe\)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
 La tabella seguente vengono elencati i possibili valori per ogni parametro destinato a piattaforme a 16 bit e 32\-bit:  
  
|Parametro|valori a 32 bit|valori a 16 bit \(supporto per lo sviluppo di versioni precedente a 16 bit\)|  
|---------------|---------------------|----------------------------------------------------------------------------------|  
|`memorymodel`|`FLAT`|`TINY`, `SMALL`, `COMPACT`, `MEDIUM`, `LARGE`, `HUGE`, `FLAT`|  
|`langtype`|`C`, `STDCALL`|`C`, `BASIC`, `FORTRAN`, `PASCAL`, `SYSCALL`, `STDCALL`|  
|`stackoption`|Non utilizzato|`NEARSTACK`, `FARSTACK`|  
  
## Codice  
 Per esempi di MASM correlati, scaricare gli esempi di compilatore da [esempi di Visual C\+\+ e la relativa documentazione per Visual Studio 2010](http://go.microsoft.com/fwlink/?LinkID=178749).  
  
 Nell'esempio riportato di seguito viene illustrato l'utilizzo di `.MODEL` della direttiva.  
  
## Esempio  
  
```  
; file simple.asm  
; For x86 (32-bit), assemble with debug information:   
;   ml -c -Zi simple.asm  
; For x64 (64-bit), assemble with debug information:   
;   ml64 -c -DX64 -Zi simple.asm  
;  
; In this sample, the 'X64' define excludes source not used   
;  when targeting the x64 architecture  
  
ifndef X64  
.686p  
.XMM  
.model flat, C  
endif  
  
.data  
; user data  
  
.code  
; user code  
  
fxn PROC public  
  xor eax, eax ; zero function return value  
  ret  
fxn ENDP  
  
end  
```  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)   
 [Esempi di Visual C\+\+ e la relativa documentazione per Visual Studio 2010](http://go.microsoft.com/fwlink/?LinkID=178749)