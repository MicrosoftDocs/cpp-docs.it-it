---
title: /Zc:threadSafeInit (Thread-safe Local Static Initialization)
ms.date: 03/14/2018
f1_keywords:
- threadSafeInit
- /Zc:threadSafeInit
helpviewer_keywords:
- -Zc compiler options (C++)
- threadSafeInit
- Thread-safe Local Static Initialization
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: a0fc4b34-2cf0-45a7-a642-b8afc4ca19f2
ms.openlocfilehash: 92a1bfa5ec3bab2814397d51e35e617b7666c706
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57808339"
---
# <a name="zcthreadsafeinit-thread-safe-local-static-initialization"></a>/Zc:threadSafeInit (Thread-safe Local Static Initialization)

Il **/Zc: threadsafeinit** opzione del compilatore indica al compilatore per inizializzare le variabili locali statiche (ambito funzione) in modo thread-safe, eliminando la necessità di una sincronizzazione manuale. Solo l'inizializzazione è thread-safe. Uso e la modifica delle variabili locali statiche da più thread devono ancora essere sincronizzati manualmente. Questa opzione è disponibile a partire da Visual Studio 2015. Per impostazione predefinita, Visual Studio abilita questa opzione.

## <a name="syntax"></a>Sintassi

> **/Zc:threadSafeInit**[**-**]

## <a name="remarks"></a>Note

In c++11 standard, le variabili di ambito blocco con statica o una durata di archiviazione thread debba essere inizializzate su zero prima di qualsiasi altra inizializzazione viene eseguita. Inizializzazione si verifica quando il controllo passa innanzitutto attraverso la dichiarazione della variabile. Se viene generata un'eccezione durante l'inizializzazione, la variabile viene considerata non inizializzato e l'inizializzazione viene tentata nuovamente il controllo della fase successivo passa attraverso la dichiarazione. Se il controllo entra la dichiarazione contemporaneamente con l'inizializzazione, i blocchi di esecuzione simultanea durante l'inizializzazione è stata completata. Il comportamento è indefinito se il controllo entra nuovamente in modo ricorsivo la dichiarazione durante l'inizializzazione. Per impostazione predefinita, Visual Studio a partire da Visual Studio 2015 implementa questo comportamento standard. Questo comportamento può essere specificato in modo esplicito, impostando il **/Zc: threadsafeinit** opzione del compilatore.

Il **/Zc: threadsafeinit** opzione del compilatore è attivata per impostazione predefinita. Il [/PERMISSIVE--](permissive-standards-conformance.md) opzione non riguarda **/Zc: threadsafeinit**.

L'inizializzazione thread-safe delle variabili locali statiche si basa sul codice implementato nella libreria Universal C Runtime (UCRT). Per evitare di creare una dipendenza nella libreria UCRT, o per mantenere il comportamento di inizializzazione non thread-safe delle versioni di Visual Studio precedenti a Visual Studio 2015, usare il **/Zc:threadSafeInit-** opzione. Se si conosce che tale thread safety non è necessaria, è possibile usare questa opzione per generare il codice leggermente più piccolo e più veloce le dichiarazioni locali statiche.

Le variabili locali statiche thread-safe usano internamente archiviazione thread-local (TLS) per fornire un'esecuzione efficiente quando il metodo statico è già stato inizializzato. L'implementazione di questa funzionalità si basa su funzioni di supporto del sistema operativo Windows in Windows Vista e sistemi operativi successivi. Windows XP, Windows Server 2003 e sistemi operativi meno recenti non è questo supporto, in modo che non si ottengono il vantaggio di efficienza. Questi sistemi operativi è anche un limite inferiore al numero di sezioni TLS che possono essere caricati. Superamento TLS limite sezione può causare un arresto anomalo del sistema. Se si tratta di un problema nel codice, in particolare nel codice che deve essere eseguito nei sistemi operativi precedenti, usare **/Zc:threadSafeInit-** per disabilitare il codice di inizializzazione thread-safe.

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Dal **configurazioni** dal menu a discesa, scegliere **tutte le configurazioni**.

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: threadsafeinit** oppure **/Zc:threadSafeInit-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Zc (conformità)](zc-conformance.md)<br/>
