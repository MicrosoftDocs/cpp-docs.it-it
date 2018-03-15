---
title: "/Zc: wchar_t (wchar_t è il tipo nativo) | Documenti Microsoft"
ms.custom: 
ms.date: 03/01/2018
ms.technology:
- cpp-tools
ms.topic: article
f1_keywords:
- VC.Project.VCCLWCECompilerTool.TreatWChar_tAsBuiltInType
- VC.Project.VCCLCompilerTool.TreatWChar_tAsBuiltInType
- /Zc:wchar_t
dev_langs:
- C++
helpviewer_keywords:
- /Zc compiler options [C++]
- -Zc compiler options [C++]
- wchar_t type
- Conformance compiler options
- Zc compiler options [C++]
ms.assetid: b0de5a84-da72-4e5a-9a4e-541099f939e0
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d4970e4aba8bf2d6aebf60f876a4770b18943781
ms.sourcegitcommit: eeb2b5ad8d3d22514a7b9bd7d756511b69ae0ccf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/15/2018
---
# <a name="zcwchart-wchart-is-native-type"></a>/Zc:wchar_t (Tipo nativo wchar_t)

Analizzare `wchar_t` come tipo predefinito in base allo standard C++.

## <a name="syntax"></a>Sintassi

> **/Zc:wchar_t**[**-**]

## <a name="remarks"></a>Note

Se **/Zc: wchar_t** è abilitato, `wchar_t` è una parola chiave per un tipo integrale incorporato nel codice compilato come C++. Se **/Zc:wchar_t-** (con un segno meno) è specificato, o nel codice compilato come C, `wchar_t` non è un tipo incorporato. Al contrario, `wchar_t` viene definito come un `typedef` per `unsigned short` nell'intestazione standard STDDEF. h. (L'implementazione Microsoft definisce in un'altra intestazione incluso dal STDDEF. h e altre intestazioni standard.)

Non è consigliabile **/Zc:wchar_t-** perché lo standard C++ richiede che `wchar_t` essere un tipo incorporato. L'uso della versione `typedef` può causare problemi di portabilità. Se si esegue l'aggiornamento da versioni precedenti di Visual C++ e si verifica l'errore del compilatore [C2664](../../error-messages/compiler-errors-2/compiler-error-c2664.md) perché il codice sta tentando di convertire in modo implicito un `wchar_t` a `unsigned short`, si consiglia di modificare il codice per correggere l'errore, invece impostazione di **/Zc:wchar_t-**.

Il **/Zc:** opzione è attivata per impostazione predefinita nelle compilazioni C++ e viene ignorato nelle compilazioni di C. Il [/ permissiva-](permissive-standards-conformance.md) opzione non influisce sul **/Zc:**.

Microsoft implementa `wchar_t` come valore unsigned a due byte. Viene eseguito il mapping al tipo nativo specifico di Microsoft `__wchar_t`. Per ulteriori informazioni su `wchar_t`, vedere [intervalli dei tipi di dati](../../cpp/data-type-ranges.md) e [tipi fondamentali](../../cpp/fundamental-types-cpp.md).

Se si scrive nuovo codice che deve interagire con il codice precedente che utilizza ancora il `typedef` versione di `wchar_t`, è possibile fornire overload per entrambe le `unsigned short` e `__wchar_t` varianti di `wchar_t`, in modo che il codice può essere collegato a il codice compilato con **/Zc: wchar_t** o codice compilato senza di esso. In caso contrario, è necessario fornire due diverse build della libreria, una con e senza **/Zc:** abilitato. Anche in questo caso, è consigliabile compilare codice precedente usando lo stesso compilatore usato per compilare quello nuovo. Non combinare mai file binari compilati con compilatori diversi.

Quando si **/Zc:** è specificato,  **\_WCHAR\_T\_definiti** e  **\_NATIVE\_WCHAR\_T\_definiti** vengono definiti i simboli. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).

Se il codice utilizza le funzioni globali COM del compilatore, perché **/Zc:** è in corso su per impostazione predefinita, è consigliabile modificare i riferimenti espliciti a comsupp. lib (tramite il [pragma di commento](../../preprocessor/comment-c-cpp.md) o scegliere il riga di comando) a comsuppw. lib o comsuppwd. lib. (Se è necessario compilare con **/Zc:wchar_t-**, utilizzare comsupp.lib.) Se si include il file di intestazione comdef.h, la libreria corretta viene specificata automaticamente. Per informazioni sul supporto COM del compilatore, vedere [supporto COM del compilatore](../../cpp/compiler-com-support.md).

Il `wchar_t` tipo incorporato non è supportato quando si compila codice C. Per ulteriori informazioni sui problemi di conformità con Visual C++, vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **proprietà di configurazione** > **C/C++** > **Language** pagina.

1. Modificare il **Considera wchar_t come tipo incorporato** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.TreatWChar_tAsBuiltInType%2A>.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)<br/>
