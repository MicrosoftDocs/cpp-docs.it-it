---
title: '/Zc: sizeddealloc (Abilita la deallocazione le funzioni dimensionata globali)'
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
ms.openlocfilehash: dc381058c6a2ef84542be1d3cdd00c410aa51c2f
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57809301"
---
# <a name="zcsizeddealloc-enable-global-sized-deallocation-functions"></a>/Zc: sizeddealloc (Abilita la deallocazione le funzioni dimensionata globali)

Il **/Zc: sizeddealloc** l'opzione del compilatore indica al compilatore di preferibile chiamare globali `operator delete` oppure `operator delete[]` funzioni che hanno un secondo parametro di tipo `size_t` quando le dimensioni dell'oggetto sono disponibili. Queste funzioni possono usare il `size_t` parametro per ottimizzare le prestazioni deallocatore.

## <a name="syntax"></a>Sintassi

> **/Zc:sizedDealloc**[**-**]

## <a name="remarks"></a>Note

In c++11 standard, è possibile definire le funzioni membro statiche `operator delete` e `operator delete[]` che accettano un secondo, `size_t` parametro. In genere questi vengono usati in combinazione con [operatore new](../../cpp/new-operator-cpp.md) funzioni implementare più efficiente gli allocatori e i deallocatori per l'oggetto. C++11, tuttavia, non definiscono un set equivalente di funzioni di deallocazione in ambito globale. In C++ 11, deallocazione globale funzioni che hanno un secondo parametro di tipo `size_t` vengono considerate funzioni delete di posizionamento. Deve essere chiamati in modo esplicito, passando un argomento di dimensione.

La standard c++14 modifica il comportamento del compilatore. Quando si definisce globali `operator delete` e `operator delete[]` che accettano un secondo parametro di tipo `size_t`, il compilatore è preferibile chiamare queste funzioni quando le versioni ambito dei membri non vengono richiamate e la dimensione dell'oggetto è disponibile. Il compilatore passa l'argomento di dimensione in modo implicito. Le versioni di argomento singolo vengono chiamate quando il compilatore non è possibile determinare le dimensioni dell'oggetto da deallocare. In caso contrario, le regole generali per la scelta della versione della funzione per richiamare deallocazione vengono mantenuti. Chiamate alle funzioni globali possono essere specificate esplicitamente facendo precedere l'operatore di risoluzione ambito (`::`) alla chiamata di funzione di deallocazione.

Per impostazione predefinita, a partire da Visual Studio 2015 Visual C++ implementa questo standard comportamento di c++14. È possibile specificare in modo esplicito questo impostando il **/Zc: sizeddealloc** opzione del compilatore. Rappresenta una modifica potenziale modifica. Usare la **/Zc:sizedDealloc-** opzione per mantenere il comportamento precedente, ad esempio, quando il codice definisce gli operatori delete di posizionamento che usano un secondo parametro di tipo `size_t`. Le implementazioni di libreria di Visual Studio predefinite delle funzioni di deallocazione globali che hanno il secondo parametro di tipo `size_t` richiamare le versioni singolo parametro. Se il codice fornisce solo parametro singolo globale operatore delete e operator delete [], funzioni globali di richiamare le implementazioni di libreria predefinite delle funzioni di deallocazione dimensionata globali.

Il **/Zc: sizeddealloc** opzione del compilatore è attivata per impostazione predefinita. Il [/PERMISSIVE--](permissive-standards-conformance.md) opzione non riguarda **/Zc: sizeddealloc**.

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

## <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Dal **configurazioni** dal menu a discesa, scegliere **tutte le configurazioni**.

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: sizeddealloc** oppure **/Zc:sizedDealloc-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Zc (conformità)](zc-conformance.md)<br/>
