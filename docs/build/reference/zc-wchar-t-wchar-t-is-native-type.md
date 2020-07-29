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
ms.openlocfilehash: 114ed4a279b66571c0dc81fc1139dcdc59c17eae
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87234315"
---
# <a name="zcwchar_t-wchar_t-is-native-type"></a>/Zc:wchar_t (Tipo nativo wchar_t)

Analizza **`wchar_t`** come tipo incorporato in base allo standard C++.

## <a name="syntax"></a>Sintassi

> **/Zc: wchar_t**[ **-** ]

## <a name="remarks"></a>Osservazioni

Se **/Zc: wchar_t** è on, **`wchar_t`** è una parola chiave per un tipo integrale incorporato nel codice compilato come C++. Se viene specificato **/Zc: wchar_t-** (con un segno meno) o nel codice compilato come C, **`wchar_t`** non è un tipo incorporato. Viene invece **`wchar_t`** definito come **`typedef`** per **`unsigned short`** nell'intestazione canonica stddef. h. (L'implementazione di Microsoft lo definisce in un'altra intestazione inclusa da stddef. h e altre intestazioni standard).

Non è consigliabile eseguire **/Zc: wchar_t** perché lo standard C++ richiede che **`wchar_t`** sia un tipo incorporato. L'uso della **`typedef`** versione può causare problemi di portabilità. Se si esegue l'aggiornamento da versioni precedenti di Visual Studio e si verifica l'errore del compilatore [C2664](../../error-messages/compiler-errors-2/compiler-error-c2664.md) perché il codice sta tentando di convertire in modo implicito **`wchar_t`** in **`unsigned short`** , è consigliabile modificare il codice per correggere l'errore, anziché impostare **/Zc: wchar_t-**.

L'opzione **/Zc: wchar_t** è abilitata per impostazione predefinita nelle compilazioni C++ e viene ignorata nelle compilazioni C. L'opzione [/permissive-](permissive-standards-conformance.md) non influisce su **/Zc: wchar_t**.

Microsoft implementa **`wchar_t`** come valore senza segno a 2 byte. Viene eseguito il mapping al tipo nativo specifico di Microsoft **`__wchar_t`** . Per ulteriori informazioni su **`wchar_t`** , vedere [intervalli dei](../../cpp/data-type-ranges.md) tipi di dati e [tipi fondamentali](../../cpp/fundamental-types-cpp.md).

Se si scrive un nuovo codice che deve interagire con codice precedente che usa ancora la **`typedef`** versione di **`wchar_t`** , è possibile fornire overload per le **`unsigned short`** **`__wchar_t`** variazioni e di, in **`wchar_t`** modo che il codice possa essere collegato con codice compilato con **/Zc: wchar_t** o con codice compilato senza di esso. In caso contrario, sarebbe necessario specificare due compilazioni diverse della libreria, una con e una senza **/Zc: wchar_t** abilitata. Anche in questo caso, è consigliabile compilare codice precedente usando lo stesso compilatore usato per compilare quello nuovo. Non combinare mai file binari compilati con compilatori diversi.

Quando si specifica **/Zc: wchar_t** , vengono definiti i simboli ** \_ WCHAR \_ t \_ ** definiti e ** \_ Native \_ WCHAR \_ t \_ ** . Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).

Se il codice usa le funzioni globali COM del compilatore, perché **/Zc: wchar_t** è ora attiva per impostazione predefinita, è consigliabile modificare i riferimenti espliciti a comsupp. lib (dal [pragma comment](../../preprocessor/comment-c-cpp.md) o dalla riga di comando) a comsuppw. lib o comsuppwd. lib. Se è necessario compilare con **/Zc: wchar_t-**, utilizzare comsupp. lib. Se si include il file di intestazione Comdef. h, viene specificata la libreria corretta. Per informazioni sul supporto COM del compilatore, vedere [supporto com del compilatore](../../cpp/compiler-com-support.md).

Il **`wchar_t`** tipo incorporato non è supportato quando si compila il codice C. Per ulteriori informazioni sui problemi di conformità con Visual C++, vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina **proprietà di configurazione**  >  **linguaggio C/C++**  >  **Language** .

1. Modificare il **wchar_t treat come proprietà del tipo incorporato** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.TreatWChar_tAsBuiltInType%2A>.

## <a name="see-also"></a>Vedere anche

[/Zc (Conformità)](zc-conformance.md)<br/>
