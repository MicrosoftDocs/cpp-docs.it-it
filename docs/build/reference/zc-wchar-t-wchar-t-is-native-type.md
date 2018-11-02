---
title: /Zc:wchar_t (Tipo nativo wchar_t)
ms.date: 03/01/2018
f1_keywords:
- VC.Project.VCCLWCECompilerTool.TreatWChar_tAsBuiltInType
- VC.Project.VCCLCompilerTool.TreatWChar_tAsBuiltInType
- /Zc:wchar_t
helpviewer_keywords:
- /Zc compiler options [C++]
- -Zc compiler options [C++]
- wchar_t type
- Conformance compiler options
- Zc compiler options [C++]
ms.assetid: b0de5a84-da72-4e5a-9a4e-541099f939e0
ms.openlocfilehash: 13d25a73a0c70789e8b860607e9f222e69ae6d36
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50537930"
---
# <a name="zcwchart-wchart-is-native-type"></a>/Zc:wchar_t (Tipo nativo wchar_t)

Analizzare `wchar_t` come tipo predefinito in base allo standard C++.

## <a name="syntax"></a>Sintassi

> **/Zc:wchar_t**[**-**]

## <a name="remarks"></a>Note

Se **/Zc: wchar_t** è attiva, `wchar_t` è una parola chiave per un tipo integrale incorporato nel codice compilato come C++. Se **/Zc:wchar_t-** (con un segno meno) è specificato, o nel codice compilato come C, `wchar_t` non è un tipo incorporato. Al contrario, `wchar_t` viene definito come un `typedef` per `unsigned short` l'intestazione canonica STDDEF. h. (L'implementazione Microsoft definisce, in un'altra intestazione incluso da STDDEF. h e altre intestazioni standard.)

Non è consigliabile **/Zc:wchar_t-** perché lo standard C++ richiede che `wchar_t` sia un tipo incorporato. L'uso della versione `typedef` può causare problemi di portabilità. Se si esegue l'aggiornamento da versioni precedenti di Visual C++ e si verifica l'errore del compilatore [C2664](../../error-messages/compiler-errors-2/compiler-error-c2664.md) perché il codice sta cercando di convertire in modo implicito una `wchar_t` a `unsigned short`, è consigliabile modificare il codice per correggere l'errore, invece dell'impostazione **/Zc:wchar_t-**.

Il **/Zc: wchar_t** opzione è attivata per impostazione predefinita nelle compilazioni di C++ e viene ignorata nelle compilazioni di C. Il [/PERMISSIVE--](permissive-standards-conformance.md) opzione non riguarda **/Zc: wchar_t**.

Microsoft implementa `wchar_t` come valore unsigned a due byte. Viene eseguito il mapping al tipo specifico di Microsoft nativo `__wchar_t`. Per altre informazioni sulle `wchar_t`, vedere [intervalli dei tipi di dati](../../cpp/data-type-ranges.md) e [tipi fondamentali](../../cpp/fundamental-types-cpp.md).

Se si scrive nuovo codice che deve interagire con il codice precedente che usa ancora la `typedef` versione di `wchar_t`, è possibile fornire overload per entrambe le `unsigned short` e `__wchar_t` varianti di `wchar_t`, in modo che il codice può essere collegato a il codice compilato con **/Zc: wchar_t** o codice compilato senza di esso. In caso contrario, sarebbe necessario fornire due diverse versioni della libreria, uno con e senza **/Zc: wchar_t** abilitata. Anche in questo caso, è consigliabile compilare codice precedente usando lo stesso compilatore usato per compilare quello nuovo. Non combinare mai file binari compilati con compilatori diversi.

Quando **/Zc: wchar_t** è specificato,  **\_WCHAR\_T\_DEFINED** e  **\_NATIVE\_WCHAR\_T\_DEFINED** vengono definiti i simboli. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).

Se il codice Usa le funzioni globali COM del compilatore, poiché **/Zc: wchar_t** è ora in per impostazione predefinita, si consiglia di modificare i riferimenti espliciti a comsupp. lib (dalle [pragma di commento](../../preprocessor/comment-c-cpp.md) o scegliere il riga di comando) a comsuppw. lib o comsuppwd. lib. (Se è necessario compilare con **/Zc:wchar_t-**, utilizzare comsupp.) Se si include il file di intestazione comdef.h, la libreria corretta viene specificata automaticamente. Per informazioni sul supporto COM del compilatore, vedere [supporto COM del compilatore](../../cpp/compiler-com-support.md).

Il `wchar_t` tipo incorporato non è supportato quando si compila codice C. Per altre informazioni sui problemi di conformità in Visual C++, vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **lingua** pagina.

1. Modificare il **Considera wchar_t come tipo incorporato** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.TreatWChar_tAsBuiltInType%2A>.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)<br/>
