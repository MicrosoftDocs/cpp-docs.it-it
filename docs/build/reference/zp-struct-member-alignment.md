---
title: -Zp (Allineamento membri Struct) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /zp
- VC.Project.VCCLCompilerTool.StructMemberAlignment
- VC.Project.VCCLWCECompilerTool.StructMemberAlignment
dev_langs: C++
helpviewer_keywords:
- Struct Member Alignment compiler option
- Zp compiler option
- /Zp compiler option [C++]
- -Zp compiler option [C++]
ms.assetid: 5242f656-ed9b-48a3-bc73-cfcf3ed2520f
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4d387e0ab020e96afb3e2975b5c8686b668cbc10
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="zp-struct-member-alignment"></a>/Zp (Allineamento membri struct)
Controlla la modalità con cui i membri di una struttura vengono compressi in memoria e specifica la stessa compressione per tutte le strutture in un modulo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Zp[1|2|4|8|16]  
```  
  
## <a name="remarks"></a>Note  
 Quando si specifica questa opzione, ogni membro di struttura dopo il primo viene archiviato sulla dimensione del tipo di membro o `n`-limiti di byte (in cui `n` è 1, 2, 4, 8 o 16), qualunque sia il minore.  
  
 I valori disponibili sono illustrati nella tabella seguente.  
  
 1  
 Comprime le strutture nei limiti di 1 byte. Uguale a **/Zp**.  
  
 2  
 Comprime le strutture nei limiti di 2 byte.  
  
 4  
 Comprime le strutture nei limiti di 4 byte.  
  
 8  
 Comprime le strutture nei limiti di 8 byte (impostazione predefinita).  
  
 16  
 Comprime le strutture nei limiti di 16 byte.  
  
 Utilizzare questa opzione non a meno che non si dispone di requisiti di allineamento specifici.  
  
 È inoltre possibile utilizzare [pack](../../preprocessor/pack.md) alla compressione di struttura di controllo. Per ulteriori informazioni sull'allineamento, vedere:  
  
-   [align](../../cpp/align-cpp.md)  
  
-   [Operatore __alignof](../../cpp/alignof-operator.md)  
  
-   [__unaligned](../../cpp/unaligned.md)  
  
-   [Esempi di allineamento della struttura](../../build/examples-of-structure-alignment.md) (specifico per x64)  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **la generazione di codice** pagina delle proprietà.  
  
4.  Modificare il **Allineamento membri Struct** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StructMemberAlignment%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)