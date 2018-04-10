---
title: -vmb, - vmg (metodo di rappresentazione) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- /vmb
- /vmg
dev_langs:
- C++
helpviewer_keywords:
- vmb compiler option [C++]
- -vmg compiler option [C++]
- vmg compiler option [C++]
- -vmb compiler option [C++]
- /vmb compiler option [C++]
- representation method compiler options [C++]
- /vmg compiler option [C++]
ms.assetid: ecdb391c-7dab-40b1-916b-673d10889fd4
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4a9d64f8b1035f731adef79356d24eeb3e4f7ee3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="vmb-vmg-representation-method"></a>/vmb, /vmg (Metodo di rappresentazione)
Selezionare il metodo usato dal compilatore per rappresentare i puntatori ai membri della classe.  
  
 Utilizzare **/vmb** se si definisce sempre una classe prima di dichiarare un puntatore a un membro della classe.  
  
 Utilizzare **/vmg** per dichiarare un puntatore a un membro di una classe prima di definire la classe. Questa esigenza può verificarsi se si definiscano i membri in due diverse classi che fanno riferimento a altro. Per tali classi reciprocamente riferimenti, una classe deve fare riferimento prima che venga definito.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/vmb  
/vmg  
```  
  
## <a name="remarks"></a>Note  
 È inoltre possibile utilizzare [pointers_to_members](../../preprocessor/pointers-to-members.md) o [parole chiave di ereditarietà](../../cpp/inheritance-keywords.md) nel codice per specificare una rappresentazione del puntatore.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)