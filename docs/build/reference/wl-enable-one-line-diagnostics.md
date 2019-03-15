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
ms.openlocfilehash: c0d5110615f66dcf4f7dc170d89ee58c2e8fa5cb
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57811979"
---
# <a name="wl-enable-one-line-diagnostics"></a>/WL (Attiva le informazioni di diagnostica su una sola riga)

Aggiunge informazioni aggiuntive per un messaggio di errore o avviso.

## <a name="syntax"></a>Sintassi

```
/WL
```

## <a name="remarks"></a>Note

Errori e messaggi di avviso del compilatore C++ possono essere seguiti da informazioni aggiuntive che viene visualizzata, per impostazione predefinita, in una nuova riga. Quando si compila dalla riga di comando, la riga aggiuntiva delle informazioni può essere aggiunta per il messaggio di errore o avviso. Ciò potrebbe risultare utile se si acquisisce l'output di compilazione in un file di log e quindi elabora tale log per trovare tutti gli errori e avvisi. Un punto e virgola separano il messaggio di errore o avviso dalla riga di aggiuntive.

Non tutti i messaggi di errore e avviso sono un paio di righe di informazioni. Il codice seguente genererà un errore con una riga aggiuntiva delle informazioni. Consente di testare l'effetto quando si usa **/WL**.

```
// compiler_option_WL.cpp
// compile with: /WL
#include <queue>
int main() {
   std::queue<int> q;
   q.fromthecontinuum();   // C2039
}
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
