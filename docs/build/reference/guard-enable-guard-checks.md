---
description: Altre informazioni su:/GUARD (Abilita controlli Guard)
title: /GUARD (abilita i controlli di protezione)
ms.date: 11/04/2016
ms.assetid: 72758e23-70ac-4616-94d7-d767477406d1
ms.openlocfilehash: 4f76de815bc10f8e1203510b25b237fe8db93444
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191719"
---
# <a name="guard-enable-guard-checks"></a>/GUARD (abilita i controlli di protezione)

Specifica il supporto per i controlli di Guard flusso di controllo nell'immagine eseguibile.

## <a name="syntax"></a>Sintassi

```
/GUARD:{CF|NO}
```

## <a name="remarks"></a>Osservazioni

Quando si specifica /GUARD:CF, il linker modifica l'intestazione di un file DLL o EXE in modo che indichi il supporto per i controlli di runtime di Guard flusso di controllo. Anche il linker aggiunge all'intestazione i dati dell'indirizzo di destinazione del flusso di controllo richiesti. Per impostazione predefinita, /GUARD:CF è disabilitato. Può essere disabilitato in modo esplicito con /GUARD:NO. Per essere efficace,/GUARD: CF richiede anche l'opzione del linker [/DynamicBase (utilizza sequenza di layout dello spazio di indirizzi)](dynamicbase-use-address-space-layout-randomization.md) , che è attiva per impostazione predefinita.

Quando il codice sorgente viene compilato usando l'opzione [/Guard: CF](guard-enable-control-flow-guard.md) , il compilatore analizza il flusso di controllo esaminando tutte le chiamate indirette per gli indirizzi di destinazione possibili. Il compilatore inserisce codice per verificare che l'indirizzo di destinazione di un'istruzione di chiamata indiretta sia incluso nell'elenco degli indirizzi di destinazione noti in fase di esecuzione. Con i sistemi operativi che supportano Guard flusso di controllo un programma che non supera il controllo di runtime di questa funzionalità viene arrestato. In questo modo l'autore di un attacco può meno facilmente eseguire codice dannoso sfruttando dati danneggiati per modificare una destinazione di chiamata.

Per creare immagini di eseguibili abilitati per Guard flusso di controllo, l'opzione /GUARD:CF deve essere specificata sia nel compilatore che nel linker. Al codice compilato ma non collegato con /GUARD:CF è associato un certo costo per i controlli di runtime. In questa situazione, inoltre, la protezione di Guard flusso di controllo non viene abilitata. Quando l'opzione/GUARD: CF viene specificata per il `cl` comando per la compilazione e il collegamento in un unico passaggio, il compilatore passa il flag al linker. Quando la proprietà **Guard flusso di controllo** è impostata in Visual Studio, l'opzione/Guard: CF viene passata sia al compilatore che al linker. Quando i file oggetto o le librerie sono state compilate separatamente, l'opzione deve essere specificata in modo esplicito nel `link` comando.

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere **proprietà di configurazione**, **linker**, **riga di comando**.

1. In **Opzioni aggiuntive** immettere `/GUARD:CF` .

## <a name="see-also"></a>Vedi anche

[/guard (abilita la protezione del flusso di controllo)](guard-enable-control-flow-guard.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
