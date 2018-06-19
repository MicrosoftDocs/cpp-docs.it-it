---
title: /Zc:referenceBinding (applicare le regole di associazione riferimento) | Documenti Microsoft
ms.custom: ''
ms.date: 03/06/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- referenceBinding
- /Zc:referenceBinding
dev_langs:
- C++
helpviewer_keywords:
- -Zc compiler options (C++)
- referenceBinding
- Enforce reference binding rules
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: 0c6cfaac-9c2a-41a3-aa94-64ca8ef261fc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 30038f6ff73eaa2d9536c3685927458a70209864
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32378880"
---
# <a name="zcreferencebinding-enforce-reference-binding-rules"></a>/Zc:referenceBinding (applicare le regole di associazione riferimento)

Quando il **/Zc:referenceBinding** è specificata l'opzione, il compilatore non consente un riferimento lvalue non const associare a una variabile temporanea.

## <a name="syntax"></a>Sintassi

> **/Zc:referenceBinding**[**-**]

## <a name="remarks"></a>Note

Se **/Zc:referenceBinding** è specificato, il compilatore seguirà la sezione al punto 8.5.3 di C++ 11 standard e non consente le espressioni che associano un tipo definito dall'utente temporaneo a un riferimento lvalue non const. Per impostazione predefinita, oppure se **/Zc:referenceBinding-** è specificata, il compilatore consente di tali espressioni come un'estensione Microsoft, ma viene generato un avviso di livello 4. Per la sicurezza di codice, la portabilità e la conformità, è consigliabile utilizzare **/Zc:referenceBinding**.

Il **/Zc:referenceBinding** opzione è disattivata per impostazione predefinita. Il [/ permissiva-](permissive-standards-conformance.md) l'opzione del compilatore in modo implicito imposta questa opzione, ma può essere sottoposto a override utilizzando **/Zc:referenceBinding-**.

## <a name="example"></a>Esempio

Questo esempio mostra l'estensione Microsoft che consente una password temporanea di un tipo definito dall'utente sia associato a un riferimento lvalue non const.

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

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc:referenceBinding** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[/Zc (conformità)](../../build/reference/zc-conformance.md)<br/>
