---
title: /Zc:referenceBinding (Applica regole di associazione di riferimento)
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
ms.openlocfilehash: b7e297d6fd913ddda4d44a42298a361e314af0b5
ms.sourcegitcommit: a930a9b47bd95599265d6ba83bb87e46ae748949
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2020
ms.locfileid: "76518478"
---
# <a name="zcreferencebinding-enforce-reference-binding-rules"></a>/Zc:referenceBinding (Applica regole di associazione di riferimento)

Quando si specifica l'opzione **/Zc: Reference** , il compilatore non consente l'associazione di un riferimento lvalue non const a un oggetto temporaneo.

## <a name="syntax"></a>Sintassi

> **/Zc:referenceBinding**[ **-** ]

## <a name="remarks"></a>Note

Se viene specificato **/Zc: referencein** , il compilatore segue la sezione 8.5.3 dello standard c++ 11: non consente espressioni che associano un tipo definito dall'utente temporaneo a un riferimento lvalue non const. Per impostazione predefinita, o se **/Zc: Reference** è specificato, il compilatore consente tali espressioni come un'estensione Microsoft, ma viene emesso un avviso di livello 4. Per la sicurezza del codice, la portabilità e la conformità è consigliabile usare **/Zc: Reference**.

Per impostazione predefinita, l'opzione **/Zc: Reference** è disattivata. L'opzione del compilatore [/permissive-](permissive-standards-conformance.md) imposta in modo implicito questa opzione, ma può essere sottoposta a override tramite **/Zc: referencey-** .

## <a name="example"></a>Esempio

In questo esempio viene illustrata l'estensione Microsoft che consente l'associazione di un tipo temporaneo definito dall'utente a un riferimento lvalue non const.

```cpp
// zcreferencebinding.cpp
struct S {
};

void f(S&) {
}

S g() {
    return S{};
}

int main() {
    S& s = g();         // warning C4239 at /W4
    const S& cs = g();  // okay, bound to const ref
    f(g());             // Extension: error C2664 only if /Zc:referenceBinding
}
```

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **C/C++**  > **Riga di comando**.

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **/Zc: Reference** , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Zc (conformità)](zc-conformance.md)<br/>
