---
title: /Zc:threadSafeInit (thread-safe l'inizializzazione statica locale) | Documenti Microsoft
ms.custom: 
ms.date: 12/13/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- threadSafeInit
- /Zc:threadSafeInit
dev_langs:
- C++
helpviewer_keywords:
- -Zc compiler options (C++)
- threadSafeInit
- Thread-safe Local Static Initialization
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: a0fc4b34-2cf0-45a7-a642-b8afc4ca19f2
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a03f3ea67c9ecabd6fa68d653a3e1812fb0266cc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="zcthreadsafeinit-thread-safe-local-static-initialization"></a>/Zc:threadSafeInit (thread-safe l'inizializzazione statica locale)  
Il `/Zc:threadSafeInit` l'opzione del compilatore indica al compilatore per inizializzare le variabili locali statiche (ambito funzione) in modo thread-safe, eliminando la necessità di sincronizzazione manuale. Solo l'inizializzazione è thread-safe. Utilizzo e la modifica delle variabili locali statiche da più thread devono ancora essere manualmente la sincronizzazione. Questa opzione è disponibile a partire da Visual Studio 2015. Per impostazione predefinita, questa opzione consente a Visual Studio.  
  
## <a name="syntax"></a>Sintassi  
  
`/Zc:threadSafeInit`[`-`]  
  
## <a name="remarks"></a>Note  
  
In C++ 11 standard, le variabili di ambito blocco con statica o la durata di archiviazione thread debba essere inizializzate su zero prima di qualsiasi altra inizializzazione viene eseguita. L'inizializzazione si verifica quando il controllo passa innanzitutto attraverso la dichiarazione della variabile. Se viene generata un'eccezione durante l'inizializzazione, la variabile viene considerata non inizializzato e l'inizializzazione viene tentata nuovamente il controllo della fase successivo passa attraverso la dichiarazione. Se il controllo entra la dichiarazione contemporaneamente all'inizializzazione, i blocchi di esecuzione simultanea durante l'inizializzazione è completa. Se il controllo entra nuovamente in modo ricorsivo la dichiarazione durante l'inizializzazione non è definito il comportamento. Per impostazione predefinita, Visual Studio a partire da Visual Studio 2015 implementa questo comportamento standard. Questo comportamento può essere specificato in modo esplicito impostando la `/Zc:threadSafeInit` l'opzione del compilatore.  
  
Thread-safe inizializzazione delle variabili locali statiche si basa sul codice implementato nella libreria di runtime di C universale (UCRT). Per evitare di creare una dipendenza UCRT o per mantenere il comportamento di inizializzazione non thread-safe di versioni di Visual Studio precedenti a Visual Studio 2015, utilizzare il `/Zc:threadSafeInit-` opzione. Se si conosce che tale thread-safe non è necessaria, è possibile utilizzare questa opzione per generare il codice leggermente più piccolo, più veloce le dichiarazioni locali statiche.  
  
Le variabili locali statiche thread-safe utilizzano internamente archiviazione locale di thread (TLS) per fornire un'esecuzione efficiente quando statica è già stato inizializzato. L'implementazione di questa funzionalità si basa sulle funzioni di supporto del sistema operativo Windows in Windows Vista e sistemi operativi successivi. Windows XP, Windows Server 2003 e sistemi operativi precedenti non è questo supporto, in modo che non si ottiene il vantaggio di efficienza. Questi sistemi operativi hanno anche un limite inferiore al numero di sezioni TLS che possono essere caricati. Superamento dei TLS limite sezione può causare un arresto anomalo. Se si tratta di un problema nel codice, in particolare nel codice che deve essere eseguito nei sistemi operativi precedenti, utilizzare `/Zc:threadSafeInit-` per disabilitare il codice di inizializzazione thread-safe.  
  
Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).
2.  Dal **configurazioni** menu a discesa scegliere **tutte le configurazioni**.
3.  Selezionare il **le proprietà di configurazione**, **C/C++**, **riga di comando** pagina delle proprietà.
4.  Modificare il **opzioni aggiuntive** proprietà da includere `/Zc:threadSafeInit` o `/Zc:threadSafeInit-` e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche  
[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
[/Zc (conformità)](../../build/reference/zc-conformance.md)  
