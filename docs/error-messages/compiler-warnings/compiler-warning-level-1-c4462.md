---
title: Compilatore avviso (livello 1) C4462 | Documenti Microsoft
ms.date: 10/25/2017
ms.technology: cpp-tools
ms.topic: error-reference
f1_keywords: C4462
dev_langs: C++
helpviewer_keywords: C4462
ms.assetid: 4e20aca4-293e-4c75-a83d-961c27ab7840
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 3c3f125224832002e3ae962b75e4b770cd766b21
ms.sourcegitcommit: 69632887f7a85f4841c49b4c1353d3144927a52c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/11/2017
---
# <a name="compiler-warning-level-1-c4462"></a>Avviso del compilatore (livello 1) C4462

> impossibile determinare il GUID del tipo. Il programma potrebbe bloccarsi in fase di esecuzione.

L'avviso C4462 viene generato in un componente o app di Windows Runtime quando un elemento `TypedEventHandler` pubblico presenta come uno dei relativi parametri di tipo un riferimento alla classe contenitore.

Questo avviso viene promossa automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per trasformare C4462 in un problema di avviso di livello 4, aggiungere questa riga al file del codice sorgente:

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
