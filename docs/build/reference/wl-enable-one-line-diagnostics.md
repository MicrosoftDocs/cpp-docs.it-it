---
title: /WL (Attiva le informazioni di diagnostica su una sola riga)
ms.date: 11/04/2016
f1_keywords:
- /wl
helpviewer_keywords:
- -WL compiler option [C++]
- /WL compiler option [C++]
- WL compiler option [C++]
ms.assetid: 332cadb4-8ea6-45fe-b67d-33ddec1f2c2e
ms.openlocfilehash: b1ded1cd18eb75ed47b76c1353ad82a7fa497ba9
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988574"
---
# <a name="wl-enable-one-line-diagnostics"></a>/WL (Attiva le informazioni di diagnostica su una sola riga)

Accoda informazioni aggiuntive a un messaggio di errore o di avviso.

## <a name="syntax"></a>Sintassi

```
/WL
```

## <a name="remarks"></a>Note

I messaggi di errore e di C++ avviso del compilatore possono essere seguiti da informazioni aggiuntive visualizzate, per impostazione predefinita, su una nuova riga. Quando si esegue la compilazione dalla riga di comando, è possibile aggiungere la riga di informazioni aggiuntiva al messaggio di errore o di avviso. Questo potrebbe essere utile se si acquisisce l'output di compilazione in un file di log e quindi si elabora tale log per trovare tutti gli errori e gli avvisi. Un punto e virgola separirà il messaggio di errore o di avviso dalla riga aggiuntiva.

Non tutti i messaggi di errore e di avviso contengono una riga di informazioni aggiuntiva. Il codice seguente genererà un errore con una riga di informazioni aggiuntiva. consente di testare l'effetto quando si usa **/WL**.

```cpp
// compiler_option_WL.cpp
// compile with: /WL
#include <queue>
int main() {
   std::queue<int> q;
   q.fromthecontinuum();   // C2039
}
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
