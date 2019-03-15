---
title: /Zc:throwingNew (Presupponi operatore nuovo genera un'eccezione)
ms.date: 03/01/2018
f1_keywords:
- throwingNew
- /Zc:throwingNew
helpviewer_keywords:
- -Zc compiler options (C++)
- throwingNew
- Assume operator new Throws
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: 20ff0101-9677-4d83-8c7b-8ec9ca49f04f
ms.openlocfilehash: c8c7b4e7246cc3bb1b3a73cde4f6830eb7178dd2
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57813513"
---
# <a name="zcthrowingnew-assume-operator-new-throws"></a>/Zc:throwingNew (Presupponi operatore nuovo genera un'eccezione)

Quando la **/Zc:throwingNew** opzione è specificata, il compilatore ottimizza le chiamate a `operator new` di ignorare i controlli per un puntatore null restituito. Questa opzione indica al compilatore di supporre che tutti collegati le implementazioni di `operator new` e gli allocatori personalizzati sono conformi allo standard C++ e genera eccezioni in errori di allocazione. Per impostazione predefinita in Visual Studio, il compilatore genera pessimistico controlli null (**/Zc:throwingNew-**) per queste chiamate, in quanto gli utenti possono collegare con un'implementazione non generare eccezioni di `operator new` o scrivere routine allocatore personalizzato che restituiscono puntatori null.

## <a name="syntax"></a>Sintassi

> **/Zc:throwingNew**[**-**]

## <a name="remarks"></a>Note

Poiché ISO c++98, lo standard ha specificato che il valore predefinito [operatore new](../../standard-library/new-operators.md#op_new) genera un'eccezione `std::bad_alloc` quando allocazione di memoria ha esito negativo. Versioni di Visual C++ fino a Visual Studio 6.0 ha restituito un puntatore null in un errore di allocazione. A partire da Visual Studio 2002, `operator new` conforme allo standard e genera un'eccezione in caso di errore. Per supportare il codice che utilizza lo stile di allocazione meno recente, Visual Studio fornisce un'implementazione con collegamento di `operator new` in nothrownew che restituisce un puntatore null in caso di errore. Per impostazione predefinita, il compilatore genera anche difensivo controlli null per impedire che causa un arresto anomalo del sistema immediato in caso di errore di questi allocatori nello stile precedente. Il **/Zc:throwingNew** opzione indica al compilatore di non inserire questi controlli null, in base al presupposto che tutti collegati memoria allocatori è conforme allo standard. Ciò non vale per esplicita non generanti `operator new` overload, che vengono dichiarati usando un parametro aggiuntivo di tipo `std::nothrow_t` e hanno esplicita `noexcept` specifica.

Concettualmente, per creare un oggetto sull'archivio libero, il compilatore genera codice per allocare la memoria e quindi richiamare il costruttore per inizializzare la memoria. Poiché il compilatore MSVC in genere non è possibile stabilire se il codice sarà collegato a un allocatore non conforme, non generare eccezioni, per impostazione predefinita genera anche un controllo null prima di chiamare il costruttore. Ciò impedisce che un puntatore null nella chiamata al costruttore di dereferenziazione se un'allocazione non generante non riuscita. Nella maggior parte dei casi, questi controlli non sono necessari, perché il valore predefinito `operator new` allocatori throw anziché restituire puntatori null. I controlli sono anche sfortunati effetti collaterali. Vengono comporterebbe le dimensioni del codice, è riempire predittore il ramo e si disabilita altre ottimizzazioni del compilatore utile, ad esempio devirtualization o const propagazione all'esterno dell'oggetto inizializzato. I controlli esistono solo per il codice di supporto che si collega al *nothrownew* o ha personalizzato non conforme `operator new` implementazioni. Se non si usa sospettate `operator new`, si consiglia di usare **/Zc:throwingNew** per ottimizzare il codice.

Il **/Zc:throwingNew** opzione è disattivata per impostazione predefinita e non è influenzato il [/PERMISSIVE--](permissive-standards-conformance.md) opzione.

Se esegue la compilazione con la generazione di codice in fase di collegamento (LTCG), non occorre specificare **/Zc:throwingNew**. Quando il codice viene compilato con LTCG, il compilatore può rilevare se il valore predefinito, conformi `operator new` viene utilizzata l'implementazione. In questo caso, il compilatore lascia automaticamente i controlli null. Il linker cerca il **/ThrowingNew** flag per indicare se l'implementazione di `operator new` sia conforme. Includendo questa direttiva nell'origine per l'implementazione del nuovo operatore personalizzato, è possibile specificare questo flag del linker:

```cpp
#pragma comment(linker, "/ThrowingNew")
```

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

## <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Dal **Configuration** dal menu a discesa, scegliere **tutte le configurazioni**.

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc:throwingNew** oppure **/Zc:throwingNew-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Zc (conformità)](zc-conformance.md)<br/>
[noexcept (C++)](../../cpp/noexcept-cpp.md)<br/>
[Specifiche di eccezioni (generazione) (C++)](../../cpp/exception-specifications-throw-cpp.md)<br/>
[Terminate (eccezione)](../../standard-library/exception-functions.md#terminate)<br/>
