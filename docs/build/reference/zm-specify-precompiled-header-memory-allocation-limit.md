---
title: -Zm (specifica il limite di allocazione di memoria dell'intestazione precompilata) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /zm
dev_langs: C++
helpviewer_keywords:
- PCH files, memory allocation limit
- Zm compiler option [C++]
- /Zm compiler option [C++]
- precompiled header files, memory allocation limit
- Specify Precompiled Header Memory Allocation Limit compiler option
- cl.exe compiler, memory allocation limit
- .pch files, memory allocation limit
- memory allocation, Memory Allocation Limit compiler option
- -Zm compiler option [C++]
ms.assetid: 94c77d5e-6672-46a7-92e0-3f69e277727d
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 476e64d052912e9937d054e52c66e1397b8da66f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="zm-specify-precompiled-header-memory-allocation-limit"></a>/Zm (Specifica il limite di allocazione della memoria per l'intestazione precompilata)
Determina la quantità di memoria allocata dal compilatore per costruire intestazioni precompilate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Zmfactor  
```  
  
## <a name="arguments"></a>Argomenti  
 `factor`  
 Fattore di scala che determina la quantità di memoria utilizzata dal compilatore per costruire intestazioni precompilate.  
  
 L'argomento `factor` rappresenta una percentuale della dimensione predefinita di un buffer di lavoro definito dal compilatore. Il valore predefinito di `factor` è 100 (percento), tuttavia è possibile specificare valori superiori o inferiori.  
  
## <a name="remarks"></a>Note  
 Nelle versioni precedenti di Visual C++ il compilatore utilizza diversi heap discreti, ciascuno dei quali è caratterizzato da un limite finito. Attualmente il compilatore aumenta in modo dinamico le dimensioni degli heap fino a un limite totale e richiede un buffer di dimensioni fisse solo per costruire intestazioni precompilate. Di conseguenza, il **/Zm** opzione del compilatore è raramente necessaria.  
  
 Se il compilatore esaurisce lo spazio dell'heap e genera il [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) messaggio di errore quando si utilizza il **/Zm** l'opzione del compilatore, è possibile potrebbe essere stata riservata una quantità eccessiva di memoria. Provare a rimuovere il **/Zm** opzione. Se il compilatore genera il [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md) messaggio di errore, un [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md) messaggio specifica il `factor` argomento da utilizzare quando si ricompila utilizzando il **/Zm** opzione del compilatore.  
  
 Nella tabella seguente viene illustrato il modo in cui l'argomento `factor` influisce sul limite di allocazione della memoria se si presuppone che le dimensioni del buffer di intestazioni precompilate predefinito siano pari a 75 MB.  
  
|Valore di `factor`|Limite di allocazione della memoria|  
|-----------------------|-----------------------------|  
|10|7.5 MB|  
|100|PARI A 75 MB|  
|200|150 MB|  
|1000|750 MB|  
|2000|1.500 MB|  
  
## <a name="other-ways-to-set-the-memory-allocation-limit"></a>Altri modi per impostare il limite di allocazione della memoria  
  
#### <a name="to-set-the-zm-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore /Zm nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Nel riquadro di spostamento, selezionare **le proprietà di configurazione**, **C/C++**, **riga di comando**.  
  
3.  Immettere il **/Zm** opzione del compilatore nella **opzioni aggiuntive** casella.  
  
#### <a name="to-set-the-zm-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore /Zm a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)