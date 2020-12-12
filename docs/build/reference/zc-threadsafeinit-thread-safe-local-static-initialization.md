---
description: 'Altre informazioni su:/Zc: threadSafeInit (inizializzazione statica locale thread-safe)'
title: '/Zc: threadSafeInit (inizializzazione statica locale thread-safe)'
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
ms.openlocfilehash: ac14e7979d2adab0b21229f426e00a489c14f38f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97271213"
---
# <a name="zcthreadsafeinit-thread-safe-local-static-initialization"></a>/Zc: threadSafeInit (inizializzazione statica locale thread-safe)

L'opzione del compilatore **/Zc: threadSafeInit** indica al compilatore di inizializzare variabili locali (ambito di funzione) statiche in modo thread-safe, eliminando la necessità di eseguire la sincronizzazione manuale. Solo l'inizializzazione è thread-safe. L'uso e la modifica delle variabili locali statiche da più thread devono comunque essere sincronizzate manualmente. Questa opzione è disponibile a partire da Visual Studio 2015. Per impostazione predefinita, Visual Studio Abilita questa opzione.

## <a name="syntax"></a>Sintassi

> **/Zc: threadSafeInit**[ **-** ]

## <a name="remarks"></a>Commenti

Nello standard C++ 11, le variabili di ambito del blocco con durata di archiviazione statica o thread devono essere inizializzate su zero prima che venga eseguita un'altra inizializzazione. L'inizializzazione si verifica quando il controllo passa per la prima volta alla dichiarazione della variabile. Se viene generata un'eccezione durante l'inizializzazione, la variabile viene considerata non inizializzata e l'inizializzazione viene ritentata al successivo passaggio del controllo nella dichiarazione. Se il controllo immette la dichiarazione simultaneamente all'inizializzazione, i blocchi di esecuzione simultanei al termine dell'inizializzazione. Il comportamento non è definito se il controllo immette nuovamente la dichiarazione in modo ricorsivo durante l'inizializzazione. Per impostazione predefinita, Visual Studio a partire da Visual Studio 2015 implementa questo comportamento standard. Questo comportamento può essere specificato in modo esplicito impostando l'opzione del compilatore **/Zc: threadSafeInit** .

L'opzione del compilatore **/Zc: threadSafeInit** è abilitata per impostazione predefinita. L'opzione [/permissive-](permissive-standards-conformance.md) non influisce su **/Zc: threadSafeInit**.

L'inizializzazione thread-safe di variabili locali statiche si basa sul codice implementato nella libreria di runtime C universale (UCRT). Per evitare di assumere una dipendenza da UCRT o per mantenere il comportamento di inizializzazione non thread-safe delle versioni di Visual Studio precedenti a Visual Studio 2015, usare l'opzione **/Zc: threadSafeInit-** . Se si è certi che la thread safety non è necessaria, usare questa opzione per generare codice leggermente più veloce e più rapido nelle dichiarazioni locali statiche.

Le variabili locali statiche thread-safe usano internamente il protocollo TLS (thread-local storage) per fornire un'esecuzione efficiente quando l'oggetto statico è già stato inizializzato. L'implementazione di questa funzionalità si basa sulle funzioni di supporto del sistema operativo Windows in Windows Vista e nei sistemi operativi successivi. Windows XP, Windows Server 2003 e i sistemi operativi meno recenti non dispongono di questo supporto, quindi non ottengono il vantaggio di efficienza. Questi sistemi operativi hanno anche un limite inferiore al numero di sezioni TLS che è possibile caricare. Il superamento del limite della sezione TLS può causare un arresto anomalo. Se si tratta di un problema nel codice, specialmente nel codice che deve essere eseguito in sistemi operativi precedenti, usare **/Zc: threadSafeInit** per disabilitare il codice di inizializzazione thread-safe.

Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Dal menu a discesa **configurazioni** scegliere **tutte le configurazioni**.

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **/Zc: threadSafeInit** o **/Zc: threadSafeInit,** quindi scegliere **OK**.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Zc (Conformità)](zc-conformance.md)<br/>
