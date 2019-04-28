---
title: /GUARD (abilita i controlli di protezione)
ms.date: 11/04/2016
ms.assetid: 72758e23-70ac-4616-94d7-d767477406d1
ms.openlocfilehash: e48921e57977cc7a1ca6a580fed78a6a2a960a02
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62292250"
---
# <a name="guard-enable-guard-checks"></a>/GUARD (abilita i controlli di protezione)

Specifica il supporto per i controlli di Guard flusso di controllo nell'immagine eseguibile.

## <a name="syntax"></a>Sintassi

```
/GUARD:{CF|NO}
```

## <a name="remarks"></a>Note

Quando si specifica /GUARD:CF, il linker modifica l'intestazione di un file DLL o EXE in modo che indichi il supporto per i controlli di runtime di Guard flusso di controllo. Anche il linker aggiunge all'intestazione i dati dell'indirizzo di destinazione del flusso di controllo richiesti. Per impostazione predefinita, /GUARD:CF è disabilitato. Può essere disabilitato in modo esplicito con /GUARD:NO. Per essere efficace, /Guard: CF richiede anche il [/DYNAMICBASE (uso ASLR)](dynamicbase-use-address-space-layout-randomization.md) opzione del linker, che è attivata per impostazione predefinita.

Quando il codice sorgente viene compilato con il [/Guard: CF](guard-enable-control-flow-guard.md) opzione, il compilatore analizza il flusso di controllo esaminando tutte le chiamate indirette per possibili indirizzi di destinazione. Il compilatore inserisce codice per verificare che l'indirizzo di destinazione di un'istruzione di chiamata indiretta sia incluso nell'elenco degli indirizzi di destinazione noti in fase di esecuzione. Con i sistemi operativi che supportano Guard flusso di controllo un programma che non supera il controllo di runtime di questa funzionalità viene arrestato. In questo modo l'autore di un attacco può meno facilmente eseguire codice dannoso sfruttando dati danneggiati per modificare una destinazione di chiamata.

Per creare immagini di eseguibili abilitati per Guard flusso di controllo, l'opzione /GUARD:CF deve essere specificata sia nel compilatore che nel linker. Al codice compilato ma non collegato con /GUARD:CF è associato un certo costo per i controlli di runtime. In questa situazione, inoltre, la protezione di Guard flusso di controllo non viene abilitata. Quando l'opzione /Guard: CF è specificato per il `cl` comando per compilare e collegare in un unico passaggio, il compilatore passa il flag al linker. Quando la **Guard flusso di controllo** proprietà è impostata in Visual Studio, l'opzione /Guard: CF viene passata al compilatore e linker. Quando i file oggetto o le librerie sono state compilate separatamente, l'opzione deve essere specificata esplicitamente nel `link` comando.

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere **le proprietà di configurazione**, **Linker**, **riga di comando**.

1. Nelle **opzioni aggiuntive**, immettere `/GUARD:CF`.

## <a name="see-also"></a>Vedere anche

[/guard (abilita guard flusso di controllo)](guard-enable-control-flow-guard.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
