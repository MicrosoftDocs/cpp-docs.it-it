---
title: /Zc:throwingNew (Presuppone la generazione dell'operatore new)
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
ms.openlocfilehash: 7593107a280995145d252efa76e0a88bddbd2275
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211866"
---
# <a name="zcthrowingnew-assume-operator-new-throws"></a>/Zc:throwingNew (Presuppone la generazione dell'operatore new)

Quando si specifica l'opzione **/Zc: throwingNew** , il compilatore ottimizza le chiamate a per `operator new` ignorare il controllo della restituzione di un puntatore null. Questa opzione indica al compilatore di presupporre che tutte le implementazioni collegate di `operator new` e gli allocatori personalizzati siano conformi allo standard C++ e generano un errore di allocazione. Per impostazione predefinita, in Visual Studio il compilatore pessimisticamente genera i controlli null (**/Zc: throwingNew-**) per queste chiamate, perché gli utenti possono collegarsi a un'implementazione non di generazione di `operator new` o scrivere routine dell'allocatore personalizzate che restituiscono puntatori null.

## <a name="syntax"></a>Sintassi

> **/Zc: throwingNew**[ **-** ]

## <a name="remarks"></a>Osservazioni

A partire da ISO C++ 98, lo standard ha specificato che l' [operatore New](../../standard-library/new-operators.md#op_new) predefinito genera un'eccezione `std::bad_alloc` quando l'allocazione di memoria non riesce. Le versioni di Visual C++ fino a Visual Studio 6,0 ha restituito un puntatore null in caso di errore di allocazione. A partire da Visual Studio 2002, è `operator new` conforme allo standard e genera un'eccezione in caso di errore. Per supportare il codice che usa lo stile di allocazione precedente, Visual Studio fornisce un'implementazione collegabile di `operator new` in nothrownew. obj che restituisce un puntatore null in caso di errore. Per impostazione predefinita, il compilatore genera anche controlli null difensivi per impedire che questi allocatori di tipo obsoleti causino un arresto anomalo immediato in caso di errore. L'opzione **/Zc: throwingNew** indica al compilatore di escludere questi controlli null, sul presupposto che tutti gli allocatori di memoria collegati siano conformi allo standard. Questa operazione non si applica agli overload espliciti non di generazione `operator new` , che vengono dichiarati usando un parametro aggiuntivo di tipo `std::nothrow_t` e hanno una **`noexcept`** specifica esplicita.

Concettualmente, per creare un oggetto nell'archivio gratuito, il compilatore genera il codice per allocare la memoria e quindi richiamare il relativo costruttore per inizializzare la memoria. Poiché il compilatore MSVC normalmente non è in grado di stabilire se questo codice verrà collegato a un allocatore non conforme e non di generazione, per impostazione predefinita genera anche un controllo null prima di chiamare il costruttore. In questo modo si impedisce la dereferenziazione di un puntatore null nella chiamata del costruttore in caso di errore di un'allocazione non generata. Nella maggior parte dei casi, questi controlli non sono necessari perché gli `operator new` allocatori predefiniti generano invece di restituire puntatori null. Anche i controlli presentano effetti collaterali sfavorevoli. Si gonfiano le dimensioni del codice, inondano il predittore del ramo e inibiscono altre ottimizzazioni del compilatore utili, ad esempio la devirtualizzazione o la propagazione const dell'oggetto inizializzato. I controlli sono disponibili solo per il supporto di codice collegato a *nothrownew. obj* o con implementazioni non conformi personalizzate `operator new` . Se non si usa la modalità non conforme `operator new` , è consigliabile usare **/Zc: throwingNew** per ottimizzare il codice.

L'opzione **/Zc: throwingNew** è disattivata per impostazione predefinita e non è interessata dall'opzione [/permissive-](permissive-standards-conformance.md) .

Se si compila mediante la generazione di codice in fase di collegamento (LTCG), non è necessario specificare **/Zc: throwingNew**. Quando il codice viene compilato usando LTCG, il compilatore è in grado di rilevare se viene utilizzata l'implementazione di conforme predefinita `operator new` . In tal caso, il compilatore lascia i controlli null automaticamente. Il linker cerca il flag **/ThrowingNew** per indicare se l'implementazione di `operator new` è conforme. È possibile specificare questo flag per il linker includendo questa direttiva nell'origine per la nuova implementazione dell'operatore personalizzato:

```cpp
#pragma comment(linker, "/ThrowingNew")
```

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

## <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Scegliere **tutte le configurazioni**dal menu a discesa **configurazione** .

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **/Zc: throwingNew** o **/Zc: throwingNew,** quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Zc (Conformità)](zc-conformance.md)<br/>
[noexcept (C++)](../../cpp/noexcept-cpp.md)<br/>
[Specifiche di eccezioni (generazione) (C++)](../../cpp/exception-specifications-throw-cpp.md)<br/>
[termina (eccezione)](../../standard-library/exception-functions.md#terminate)<br/>
