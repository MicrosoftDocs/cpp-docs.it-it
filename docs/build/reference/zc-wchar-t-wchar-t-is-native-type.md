---
title: "-Zc: wchar_t (wchar_t è il tipo nativo) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLWCECompilerTool.TreatWChar_tAsBuiltInType
- VC.Project.VCCLCompilerTool.TreatWChar_tAsBuiltInType
- /Zc:wchar_t
dev_langs: C++
helpviewer_keywords:
- /Zc compiler options [C++]
- -Zc compiler options [C++]
- wchar_t type
- Conformance compiler options
- Zc compiler options [C++]
ms.assetid: b0de5a84-da72-4e5a-9a4e-541099f939e0
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3375e39120fdc8f2b0d8d5502aa6def997511ff5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="zcwchart-wchart-is-native-type"></a>/Zc:wchar_t (Tipo nativo wchar_t)
Analizzare `wchar_t` come tipo predefinito in base allo standard C++. Per impostazione predefinita, **/Zc: wchar_t** si trova in.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Zc:wchar_t[-]  
```  
  
## <a name="remarks"></a>Note  
 Se **/Zc: wchar_t** è on, `wchar_t` mappato al tipo nativo specifico di Microsoft `__wchar_t`. Se **/Zc:wchar_t-** (con un segno meno) è specificato, `wchar_t` esegue il mapping a un `typedef` per `unsigned short`. In Visual C++ 6.0 e versioni precedenti, `wchar_t` non è implementato come tipo predefinito, ma è dichiarato in wchar.h come `typedef` per `unsigned short`. Non è consigliabile **/Zc:wchar_t-** perché lo standard C++ richiede che `wchar_t` essere un tipo incorporato. L'uso della versione `typedef` può causare problemi di portabilità. Se si esegue l'aggiornamento da versioni precedenti di Visual C++ e si verifica l'errore del compilatore [C2664](../../error-messages/compiler-errors-2/compiler-error-c2664.md) perché il codice sta tentando di convertire in modo implicito un `wchar_t` a `unsigned short`, si consiglia di modificare il codice per correggere l'errore, invece impostazione di **/Zc:wchar_t-**.  
  
 Microsoft implementa `wchar_t` come valore unsigned a due byte. Per ulteriori informazioni su `wchar_t`, vedere [intervalli dei tipi di dati](../../cpp/data-type-ranges.md) e [tipi fondamentali](../../cpp/fundamental-types-cpp.md).  
  
 Se si scrive nuovo codice che deve interagire con il codice precedente che utilizza ancora il `typedef` versione di `wchar_t`, è possibile fornire overload per entrambe le `unsigned short` e `__wchar_t` varianti di `wchar_t`, in modo che il codice può essere collegato a il codice compilato con **/Zc: wchar_t** o codice compilato senza di esso. In caso contrario, è necessario fornire due diverse build della libreria, una con e senza **/Zc: wchar_t** abilitato. Anche in questo caso, è consigliabile compilare codice precedente usando lo stesso compilatore usato per compilare quello nuovo. Non combinare mai file binari compilati con compilatori diversi.  
  
 Quando **/Zc: wchar_t** è specificato, **WCHAR_T_DEFINED** e **NATIVE_WCHAR_T_DEFINED** vengono definiti i simboli. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).  
  
 Se il codice utilizza le funzioni globali COM del compilatore, perché **/Zc: wchar_t** è ora in per impostazione predefinita, si consiglia di modificare i riferimenti espliciti a comsupp.lib, dal [pragma di commento](../../preprocessor/comment-c-cpp.md) o sul comando riga, a comsuppw.lib o comsuppwd.lib. (Se è necessario compilare con **/Zc:wchar_t-**, utilizzare comsupp.lib.) Se si include il file di intestazione comdef.h, la libreria corretta viene specificata automaticamente. Per informazioni sul supporto COM del compilatore, vedere [supporto COM del compilatore](../../cpp/compiler-com-support.md).  
  
 Il tipo `wchar_t` non è supportato quando si compila codice C. Per ulteriori informazioni sui problemi di conformità con Visual C++, vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Nel riquadro sinistro, espandere **le proprietà di configurazione**, **C/C++**, quindi selezionare **Language**.  
  
3.  Modificare il **Considera wchar_t come tipo incorporato** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.TreatWChar_tAsBuiltInType%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [/Zc (conformità)](../../build/reference/zc-conformance.md)