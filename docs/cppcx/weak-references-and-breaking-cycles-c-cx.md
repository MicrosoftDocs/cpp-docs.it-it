---
description: 'Altre informazioni su: riferimenti deboli e cicli di interruzioni (C++/CX)'
title: Riferimenti deboli e cicli di interruzione (C++/CX)
ms.date: 01/22/2017
ms.assetid: 1acb6402-05f0-4951-af94-0e9dab41c53e
ms.openlocfilehash: 0c42081b0030ee697eab63fa519e2f6cbe4fe090
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97288022"
---
# <a name="weak-references-and-breaking-cycles-ccx"></a>Riferimenti deboli e cicli di interruzione (C++/CX)

In qualsiasi sistema di tipi basato su conteggio dei riferimenti, i riferimenti ai tipi possono costituire *cicli*, ossia un oggetto fa riferimento a un altro oggetto, il secondo oggetto fa riferimento a un terzo oggetto e così via finché un determinato oggetto finale non fa riferimento al primo oggetto. In un ciclo, gli oggetti non possono essere eliminati correttamente quando il conteggio dei riferimenti di un oggetto diventa zero. Per facilitare la risoluzione di questo problema, C++/CX fornisce la classe [Platform:: WeakReference](../cppcx/platform-weakreference-class.md) Class. Un oggetto `WeakReference` supporta il metodo [Resolve](../cppcx/platform-weakreference-class.md#resolve) , che restituisce null se l'oggetto non esiste più oppure genera [Platform::InvalidCastException](../cppcx/platform-invalidcastexception-class.md) se l'oggetto è attivo ma non è di tipo `T`.

Uno scenario in cui `WeakReference` è necessario utilizzare è quando il **`this`** puntatore viene acquisito in un'espressione lambda utilizzata per definire un gestore eventi. È consigliabile utilizzare i metodi denominati durante la definizione dei gestori eventi, ma se desideri ricorrere a un'espressione lambda per il tuo gestore eventi o se devi interrompere un ciclo di conteggio dei riferimenti in un'altra situazione, utilizza `WeakReference`. Ecco un esempio:

```

using namespace Platform::Details;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Controls;

Class1::Class1()
{
    // Class1 has a reference to m_Page
    m_Page = ref new Page();

    // m_Page will have a reference to this Class1
    // so create a weak reference to this
    WeakReference wr(this);
    m_Page->DoubleTapped += ref new DoubleTappedEventHandler(
        [wr](Object^ sender, DoubleTappedRoutedEventArgs^ args)
    {
       // Use the weak reference to get the object
       Class1^ c = wr.Resolve<Class1>();
       if (c != nullptr)
       {
           c->m_eventFired = true;
       }
       else
       {
           // Inform the event that this handler should be removed
           // from the subscriber list
           throw ref new DisconnectedException();
       }
    });
}

}
```

Quando un gestore eventi genera `DisconnectedException`, viene eseguita la rimozione del gestore dall'elenco di sottoscrittori.
