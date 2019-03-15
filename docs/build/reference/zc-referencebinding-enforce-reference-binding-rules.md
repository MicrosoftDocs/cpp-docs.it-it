---
title: '/Zc: referencebinding (Applica le regole di associazione riferimento)'
ms.date: 03/06/2018
f1_keywords:
- referenceBinding
- /Zc:referenceBinding
helpviewer_keywords:
- -Zc compiler options (C++)
- referenceBinding
- Enforce reference binding rules
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: 0c6cfaac-9c2a-41a3-aa94-64ca8ef261fc
ms.openlocfilehash: 9dfe8f5b4713d9567f6e98af6685c552fb51160e
ms.sourcegitcommit: faa42c8a051e746d99dcebe70fd4bbaf3b023ace
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/15/2019
ms.locfileid: "57822158"
---
# <a name="zcreferencebinding-enforce-reference-binding-rules"></a>/Zc: referencebinding (Applica le regole di associazione riferimento)

Quando la **/Zc: referencebinding** opzione è specificata, il compilatore non consente un riferimento lvalue non costante per l'associazione a una variabile temporanea.

## <a name="syntax"></a>Sintassi

> **/Zc:referenceBinding**[**-**]

## <a name="remarks"></a>Note

Se **/Zc: referencebinding** è specificato, il compilatore segue la sezione al punto 8.5.3 di c++11 standard e non supporta le espressioni che associano un tipo definito dall'utente temporaneo su un riferimento lvalue non costante. Per impostazione predefinita, oppure se **/Zc:referenceBinding-** è specificata, il compilatore consente a tali espressioni come un'estensione Microsoft, ma viene generato un avviso di livello 4. Per la sicurezza di codice, portabilità e della conformità, è consigliabile usare **/Zc: referencebinding**.

Il **/Zc: referencebinding** opzione è disattivata per impostazione predefinita. Il [/PERMISSIVE--](permissive-standards-conformance.md) l'opzione del compilatore in modo implicito imposta questa opzione, ma può essere sottoposto a override utilizzando **/Zc:referenceBinding-**.

## <a name="example"></a>Esempio

Questo esempio illustra l'estensione di Microsoft che consente a una posizione temporanea di un tipo definito dall'utente da associare a un riferimento lvalue non costante.

```cpp
// zcreferencebinding.cpp
struct S {
};

void f(S&) {
}

S g() {
    return S{};
}

void main() {
    S& s = g();         // warning C4239 at /W4
    const S& cs = g();  // okay, bound to const ref
    f(g());             // Extension: error C2664 only if /Zc:referenceBinding
}
```

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: referencebinding** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Zc (conformità)](zc-conformance.md)<br/>
