---
title: struct UNWIND_CODE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 104955d8-7e33-4c5a-b0c6-3254648f0af3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f5bccddd2ddd5c0f9dfbc828a7da3a66fa13339d
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48861720"
---
# <a name="struct-unwindcode"></a>struct UNWIND_CODE

Matrice di codice di rimozione è utilizzata per registrare la sequenza delle operazioni nel prologo che interessano i registri non volatili e RSP. Ogni elemento di codice ha il formato seguente:

|||
|-|-|
|UBYTE|Offset nel prologo|
|UBYTE: 4|Codice di operazione di rimozione|
|UBYTE: 4|Informazioni sulle operazioni|

La matrice viene ordinata per ordine decrescente di offset nel prologo.

## <a name="offset-in-prolog"></a>Offset nel prologo

Offset dall'inizio del prologo di fine dell'istruzione che esegue questa operazione, più 1 (vale a dire, l'offset dell'inizio dell'istruzione successiva).

## <a name="unwind-operation-code"></a>Codice di operazione di rimozione

Nota: Alcuni codici operativi richiede un offset a un valore nel frame dello stack locali non firmato. Questo offset è dall'inizio (indirizzo più basso) dell'allocazione dello stack predefinito. Se il campo registrare Frame in UNWIND_INFO è zero, questo offset è from RSP. Se il campo registrare Frame è diverso da zero, questo è l'offset dal quale RSP si trovava quando è stata stabilita la reg FP. Questo è uguale al reg FP meno l'offset di reg FP (16 \* cornice ridimensionata registrare offset in UNWIND_INFO). Se viene usata una reg FP, quindi qualsiasi codice di rimozione che accetta un offset deve essere usato solo dopo aver stabilito il reg FP nel prologo.

Per tutti i codici operativi tranne `UWOP_SAVE_XMM128` e `UWOP_SAVE_XMM128_FAR`, offset sarà sempre un multiplo di 8, perché tutti stack di interesse vengono archiviati nei limiti di 8 byte (lo stesso stack è sempre allineamento a 16 byte). Per i codici di operazione che accettano un offset breve (meno di 512 KB), il USHORT finale nei nodi per il codice contiene l'offset diviso per 8. Per i codici operativi che accettano un offset lungo (512K < = offset < 4GB), i due nodi USHORT finali per questo codice tenendo l'offset (in formato little-endian).

Per i codici operativi `UWOP_SAVE_XMM128` e `UWOP_SAVE_XMM128_FAR`, offset sarà sempre un multiplo di 16, poiché tutte le operazioni di registri XMM 128 bit devono verificarsi in memoria con allineamento a 16 byte. Pertanto, viene usato un fattore di scala pari a 16 per `UWOP_SAVE_XMM128`, consentendo l'offset di minore di 1 milione.

Il codice di operazione di rimozione è uno dei seguenti:

`UWOP_PUSH_NONVOL` (0) 1 nodo

Eseguire il push register un integer non volatili, decrementando RSP di 8. Le informazioni sulle operazioni è il numero del registro. Si noti che, a causa dei vincoli negli epiloghi, `UWOP_PUSH_NONVOL` codici di rimozione devono visualizzati per primi nel prologo e di conseguenza, alla fine nella matrice di codice di rimozione. Questo ordinamento relativo si applica a tutti gli altri codici di rimozione tranne `UWOP_PUSH_MACHFRAME`.

`UWOP_ALLOC_LARGE` (1) 2 o 3 nodi

Allocare un'area di grandi dimensioni nello stack. Esistono due forme. Se le informazioni sulle operazioni è uguale a 0, la dimensione dell'allocazione diviso per 8 viene registrato nella successiva fascia, consentendo un'allocazione fino a 512 K - 8. Se le informazioni sulle operazioni è uguale a 1, quindi la dimensione dell'allocazione non ridimensionata viene registrata nei prossimi due slot in formato little-endian, consentendo di allocazioni fino a 4GB - 8.

`UWOP_ALLOC_SMALL` (2) 1 nodo

Allocare un'area di piccole dimensioni nello stack. La dimensione dell'allocazione è il campo di informazioni sull'operazione \* 8 + 8, che consente di allocazioni da 8 a 128 byte.

Il codice di rimozione per un'allocazione di stack debba usare sempre la codifica più breve possibile:

|**Dimensione di allocazione**|**Codice di rimozione**|
|-|-|
|8 e 128 byte|`UWOP_ALLOC_SMALL`|
|136 per 512K - 8 byte|`UWOP_ALLOC_LARGE`, informazioni sulle operazioni = 0|
|G 512 KB e 4-8 byte|`UWOP_ALLOC_LARGE`, informazioni sulle operazioni = 1|

`UWOP_SET_FPREG` (3) 1 nodo

Stabilire il registro dei puntatori frame tramite l'impostazione del registro da un offset rispetto al valore corrente di RSP. L'offset è uguale al Frame registrare offset (ridimensionato) campo in UNWIND_INFO \* 16, che consente di offset da 0 a 240. L'uso di un offset permette di definire un puntatore ai frame che punta al centro dell'allocazione fissa dello stack, consentendo la densità di codice, consentendo più accessi di utilizzare formati di istruzioni brevi. Si noti che il campo di informazioni sull'operazione è riservato e non deve essere utilizzato.

`UWOP_SAVE_NONVOL` (4) 2 nodi

Salvare un registro integer non volatili nello stack utilizzando un'istruzione MOV invece di un'operazione PUSH. Viene utilizzato principalmente per wrapping, in cui viene salvato un registro non volatile per lo stack in una posizione che in precedenza è stato allocato. Le informazioni sulle operazioni è il numero del registro. L'offset dello stack in scala-by-8 viene registrata entro i prossimi di rimozione dello slot di codice dell'operazione, come descritto in precedenza.

`UWOP_SAVE_NONVOL_FAR` (5) 3 nodi

Salvare un registro integer non volatili nello stack con un offset lungo, utilizzando un'istruzione MOV invece di un'operazione PUSH. Viene utilizzato principalmente per wrapping, in cui viene salvato un registro non volatile per lo stack in una posizione che in precedenza è stato allocato. Le informazioni sulle operazioni è il numero del registro. L'offset dello stack non ridimensionato viene registrata entro i prossimi due rimozione slot di codice dell'operazione, come descritto in precedenza.

`UWOP_SAVE_XMM128` (8) 2 nodi

Salvare tutti i 128 bit di un registro XMM non volatile nello stack. Le informazioni sulle operazioni è il numero del registro. L'offset in scala per 16 stack viene registrato nella successiva fascia.

`UWOP_SAVE_XMM128_FAR` (9) 3 nodi

Salvare tutti i 128 bit di un registro XMM non volatile nello stack con una differenza di tempo. Le informazioni sulle operazioni è il numero del registro. L'offset dello stack non ridimensionato viene registrato nei prossimi due slot.

`UWOP_PUSH_MACHFRAME` (10) 1 nodo

Push di un frame di computer.  Viene utilizzato per registrare l'effetto di un'eccezione o un interrupt hardware. Esistono due forme. Se le informazioni sulle operazioni è uguale a 0, il seguente è stato inserito nello stack:

|||
|-|-|
|RSP + 32|SS|
|RSP + 24|RSP precedente|
|RSP + 16|CONTENUTO|
|RSP + 8|CS|
|RSP|RIP|

Se le informazioni sulle operazioni è uguale a 1, quindi invece stato inserito quanto segue:

|||
|-|-|
|RSP + 40|SS|
|RSP + 32|RSP precedente|
|RSP + 24|CONTENUTO|
|RSP + 16|CS|
|RSP + 8|RIP|
|RSP|Codice di errore|

Questo codice di rimozione verrà sempre visualizzate in un prologo fittizio, che non viene mai eseguito, ma invece precede il punto di ingresso reale di una routine di interrupt ed esiste solo per fornire un'area per simulare il push di una cornice della macchina. `UWOP_PUSH_MACHFRAME` Registra la simulazione, che indica che la macchina a livello concettuale ha eseguito le operazioni seguenti:

1. Apri nuova finestra dell'indirizzo restituito RIP dall'inizio dello stack in *Temp*

1. SS push

1. Eseguire il push RSP precedente

1. Push contenuto

1. Eseguire il push. CS

1. Eseguire il push *Temp*

1. Push del codice di errore (se le informazioni di binding è uguale a 1)

Simulato `UWOP_PUSH_MACHFRAME` decrementa operazione RSP di 40 (informazioni di binding è uguale a 0) o 48 (informazioni di binding è uguale a 1).

## <a name="operation-info"></a>Informazioni sulle operazioni

Il significato di queste 4 bit dipende dal codice dell'operazione. Per codificare un registro per utilizzo generico (integer), viene usato il mapping seguente:

|||
|-|-|
|0|RAX|
|1|RCX|
|2|RDX|
|3|RBX|
|4|RSP|
|5|RBP|
|6|RSI|
|7|RDI|
|da 8 a 15|R8 a R15|

## <a name="see-also"></a>Vedere anche

[Dati di rimozione per la gestione delle eccezioni, supporto del debugger](../build/unwind-data-for-exception-handling-debugger-support.md)
