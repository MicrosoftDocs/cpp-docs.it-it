---
title: . MODELLO | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: .MODEL
dev_langs: C++
helpviewer_keywords: .MODEL directive
ms.assetid: 057f00df-1515-4c55-852a-d936c8a34b53
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5407e201b25fdf9b5344d438a69e2fc3e972327b
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="model"></a>.MODEL
Inizializza il modello di memoria programma.  
  
## <a name="syntax"></a>Sintassi  
  
```  
.MODEL memorymodel [[, langtype]] [[, stackoption]]  
```  
  
#### <a name="parameters"></a>Parametri  
 `memorymodel`  
 Parametro obbligatorio che determina le dimensioni dei puntatori di codice e i dati.  
  
 `langtype`  
 Parametro facoltativo che imposta le convenzioni di denominazione e chiamate per le procedure e i simboli pubblici.  
  
 `stackoption`  
 Parametro facoltativo.  
  
 `stackoption`non viene usato se `memorymodel` è `FLAT`.  
  
 Specifica di `NEARSTACK` raggruppa il segmento di stack in un singolo segmento fisico (`DGROUP`) insieme ai dati. Lo stack di registri di segmento (`SS`) viene utilizzato per contenere lo stesso indirizzo del Registro di segmento di dati (`DS`). `FARSTACK`gruppo non lo stack con `DGROUP`; pertanto `SS` non è uguale a `DS`.  
  
## <a name="remarks"></a>Note  
 .`MODEL` non viene utilizzato in [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
 Nella tabella seguente sono elencati i possibili valori per ogni parametro quando la destinazione a piattaforme a 32 e a 16 bit:  
  
|Parametro|valori a 32 bit|valori a 16 bit (supporto per lo sviluppo di 16 bit precedenti)|  
|---------------|--------------------|----------------------------------------------------------------|  
|`memorymodel`|`FLAT`|`TINY`, `SMALL`, `COMPACT`, `MEDIUM`, `LARGE`, `HUGE`, `FLAT`|  
|`langtype`|`C`, `STDCALL`|`C`, `BASIC`, `FORTRAN`, `PASCAL`, `SYSCALL`, `STDCALL`|  
|`stackoption`|Non utilizzato|`NEARSTACK`, `FARSTACK`|  
  
## <a name="code"></a>Codice  
 Per esempi relativi MASM, scaricare gli esempi del compilatore [esempi di Visual C++ e la relativa documentazione per Visual Studio 2010](http://go.microsoft.com/fwlink/p/?linkid=178749).  
  
 Nell'esempio seguente viene illustrato l'utilizzo del `.MODEL` direttiva.  
  
## <a name="example"></a>Esempio  
  
```  
; file simple.asm  
; For x86 (32-bit), assemble with debug information:   
;   ml -c -Zi simple.asm  
; For x64 (64-bit), assemble with debug information:   
;   ml64 -c -DX64 -Zi simple.asm  
;  
; In this sample, the 'X64' define excludes source not used   
;  when targeting the x64 architecture  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)   
 [Esempi di Visual C++ e la relativa documentazione per Visual Studio 2010](http://go.microsoft.com/fwlink/p/?linkid=178749)