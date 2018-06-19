---
title: -J (char predefinito è di tipo unsigned) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.DefaultCharIsUnsigned
- VC.Project.VCCLWCECompilerTool.DefaultCharIsUnsigned
- /j
dev_langs:
- C++
helpviewer_keywords:
- defaults, char type
- char data type
- -J compiler option [C++]
- /J compiler option [C++]
- J compiler option [C++]
- default char type is unsigned
ms.assetid: 50973667-6638-491e-9c41-bff73acae19f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a93172296b0e2e6d54dc428ffc62812ad979b160
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374466"
---
# <a name="j-default-char-type-is-unsigned"></a>/J (Il tipo char predefinito è unsigned)
Modifica il tipo `char` predefinito da `signed char` a `unsigned char` e il tipo `char` ha estensione zero quando viene ampliato a un tipo `int`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/J  
```  
  
## <a name="remarks"></a>Note  
 Se un `char` valore è dichiarato in modo esplicito come `signed`, **/J** opzione non ha effetto e il valore è con segno esteso quando viene ampliato a un `int` tipo.  
  
 Il **/J** opzione definisce `_CHAR_UNSIGNED`, che viene utilizzata con `#ifndef` nel file Limits. h per definire l'intervallo del valore predefinito `char` tipo.  
  
 ANSI C e C++ non richiedono un'implementazione specifica del `char` tipo. Questa opzione è utile quando si lavora con dati di tipo carattere, infine, verranno convertiti in una lingua diversa dall'inglese.  
  
> [!NOTE]
>  Se si utilizza questa opzione del compilatore con ATL/MFC è possibile che venga generato un errore. Benché sia possibile disabilitare questo errore definendo `_ATL_ALLOW_CHAR_UNSIGNED`, questa soluzione alternativa non è supportata e potrebbe non funzionare.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.  
  
2.  Nel progetto **pagine delle proprietà** la finestra di dialogo, nel riquadro sinistro sotto **le proprietà di configurazione**, espandere **C/C++** e quindi selezionare **dellarigadicomando**.  
  
3.  Nel **opzioni aggiuntive** riquadro, specificare il **/J** l'opzione del compilatore.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DefaultCharIsUnsigned%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Utilizzo di Proprietà del progetto](../../ide/working-with-project-properties.md)