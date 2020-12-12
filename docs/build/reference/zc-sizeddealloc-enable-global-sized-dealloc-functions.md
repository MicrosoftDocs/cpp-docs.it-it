---
description: 'Altre informazioni su:/Zc: sizedDealloc (Abilita funzioni di deallocazione ridimensionate globali)'
title: '/Zc: sizedDealloc (Abilita le funzioni di deallocazione ridimensionate globali)'
ms.date: 03/06/2018
f1_keywords:
- sizedDealloc
- /Zc:sizedDealloc
helpviewer_keywords:
- -Zc compiler options (C++)
- sizedDealloc
- Enable Global Sized Deallocation Functions
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: 3a73ace0-4d36-420a-b699-0ca6fc0dd134
ms.openlocfilehash: 4e40355dc3c61f725ca9996dc4c91c0604866fe4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269068"
---
# <a name="zcsizeddealloc-enable-global-sized-deallocation-functions"></a>/Zc: sizedDealloc (Abilita le funzioni di deallocazione ridimensionate globali)

L'opzione del compilatore **/Zc: sizedDealloc** indica al compilatore di chiamare in modo preferenziale le `operator delete` funzioni o globali `operator delete[]` che dispongono di un secondo parametro di tipo `size_t` quando le dimensioni dell'oggetto sono disponibili. Queste funzioni possono utilizzare il `size_t` parametro per ottimizzare le prestazioni di deallocatore.

## <a name="syntax"></a>Sintassi

> **/Zc: sizedDealloc**[ **-** ]

## <a name="remarks"></a>Commenti

Nello standard C++ 11, è possibile definire funzioni membro statiche `operator delete` `operator delete[]` che accettano un secondo `size_t` parametro. Vengono in genere utilizzate in combinazione con funzioni [operatore New](../../cpp/new-operator-cpp.md) per implementare allocatori e deallocatori più efficienti per l'oggetto. Tuttavia, C++ 11 non definisce un set equivalente di funzioni di deallocazione nell'ambito globale. In C++ 11, le funzioni di deallocazione globali che dispongono di un secondo parametro di tipo `size_t` sono considerate funzioni di eliminazione del posizionamento. Devono essere chiamati in modo esplicito passando un argomento di dimensione.

Lo standard C++ 14 modifica il comportamento del compilatore. Quando si definisce Global `operator delete` e si `operator delete[]` accetta un secondo parametro di tipo `size_t` , il compilatore preferisce chiamare queste funzioni quando le versioni dell'ambito del membro non vengono richiamate e le dimensioni dell'oggetto sono disponibili. Il compilatore passa l'argomento di dimensione in modo implicito. Le versioni a singolo argomento vengono chiamate quando il compilatore non è in grado di determinare le dimensioni dell'oggetto da deallocare. In caso contrario, verranno applicate le normali regole per la scelta della versione della funzione di deallocazione da richiamare. Le chiamate alle funzioni globali possono essere specificate in modo esplicito anteponendo l'operatore di risoluzione dell'ambito ( `::` ) alla chiamata della funzione di deallocazione.

Per impostazione predefinita, Visual C++ a partire da Visual Studio 2015 implementa questo comportamento standard di C++ 14. È possibile specificarlo in modo esplicito impostando l'opzione del compilatore **/Zc: sizedDealloc** . Rappresenta una modifica potenzialmente sostanziale. Usare l'opzione **/Zc: sizedDealloc-** per mantenere il comportamento precedente, ad esempio quando il codice definisce gli operatori delete di posizionamento che usano un secondo parametro di tipo `size_t` . Le implementazioni predefinite della libreria di Visual Studio delle funzioni di deallocazione globali che hanno il secondo parametro di tipo `size_t` richiamano le versioni a parametro singolo. Se il codice fornisce solo operatore globale delete e operator delete [] a parametro singolo, le implementazioni di libreria predefinite delle funzioni di deallocazione dimensionate globali richiamano le funzioni globali.

L'opzione del compilatore **/Zc: sizedDealloc** è abilitata per impostazione predefinita. L'opzione [/permissive-](permissive-standards-conformance.md) non influisce su **/Zc: sizedDealloc**.

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

## <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Dal menu a discesa **configurazioni** scegliere **tutte le configurazioni**.

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **/Zc: sizedDealloc** o **/Zc: sizedDealloc,** quindi scegliere **OK**.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Zc (Conformità)](zc-conformance.md)<br/>
