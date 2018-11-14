---
title: Avviso del compilatore (livello 1) C4462
ms.date: 10/25/2017
f1_keywords:
- C4462
helpviewer_keywords:
- C4462
ms.assetid: 4e20aca4-293e-4c75-a83d-961c27ab7840
ms.openlocfilehash: bd4d5c1fd7dd8d7419fc901149ceab7e769e7076
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51331867"
---
# <a name="compiler-warning-level-1-c4462"></a>Avviso del compilatore (livello 1) C4462

> impossibile determinare il GUID del tipo. Il programma potrebbe bloccarsi in fase di esecuzione.

L'avviso C4462 viene generato in un componente o app di Windows Runtime quando un elemento `TypedEventHandler` pubblico presenta come uno dei relativi parametri di tipo un riferimento alla classe contenitore.

Questo avviso viene promossa automaticamente a un errore. Se si vuole modificare questo comportamento, usare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4462 un problema di avviso di livello 4, aggiungere questa riga al file del codice sorgente:

```cpp
#pragma warning(4:4462)
```

## <a name="example"></a>Esempio

In questo esempio genera l'avviso C4462:

```cpp
namespace N
{
    public ref struct EventArgs sealed {};
    public ref struct R sealed
    {
        R() {}
        event Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^ e;
    };
}

[Platform::MTAThread]
int main()
{
    auto x = ref new N::R();
}
```

Esistono due modi per risolvere l'errore. In primo luogo, come mostrato nell'esempio seguente, è possibile dare all'evento accessibilità interna in modo che risulti disponibile al codice nello stesso eseguibile, ma non al codice in altri componenti di Windows Runtime.

```cpp
internal:
    event Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^ e;
```

Se l'evento deve essere pubblico, è possibile ricorrere a un'altra soluzione, ovvero esporlo attraverso un'interfaccia predefinita:

```cpp
ref struct R;
public interface struct IR{ event Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^ e;};

public ref struct R sealed : [Windows::Foundation::Metadata::Default] IR
{
    R() {}
    virtual event Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^ e;
};
```

Un GUID del tipo `Windows::Foundation::TypedEventHandler<R^, EventArgs^>^` viene utilizzato solo quando il tipo è accessibile da un altro componente. La prima soluzione funziona perché è accessibile solo dall'interno del proprio componente dopo l'applicazione della soluzione. In caso contrario, il compilatore suppone il caso peggiore e genera l'avviso.
