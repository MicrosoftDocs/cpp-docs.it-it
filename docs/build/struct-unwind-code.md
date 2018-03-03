---
title: struct UNWIND_CODE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 104955d8-7e33-4c5a-b0c6-3254648f0af3
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 76059ff24b46fd537db0c2670a30cf3f42ee2166
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="struct-unwindcode"></a>struct UNWIND_CODE
Matrice di codice di rimozione viene utilizzata per registrare la sequenza di operazioni nel prologo che interessano il RSP e i registri non volatili. Ogni elemento di codice presenta il formato seguente:  
  
|||  
|-|-|  
|UBYTE|Offset nel prologo|  
|UBYTE: 4|Codice di operazione di rimozione|  
|UBYTE: 4|Informazioni sull'operazione|  
  
 La matrice è ordinata in ordine decrescente di offset nel prologo.  
  
 **Offset nel prologo**  
 Offset dall'inizio del prologo della fine dell'istruzione che esegue questa operazione, più 1 (ovvero, l'offset dall'inizio dell'istruzione successiva).  
  
 **Codice di operazione di rimozione**  
 Nota: Alcuni codici operativi richiedono un offset senza segno a un valore nel frame dello stack locali. Questo offset è dall'inizio dell'allocazione dello stack predefinito (indirizzo più basso). Se il campo Frame Register in UNWIND_INFO è zero, questo offset è from RSP. Se il campo Frame Register è diverso da zero, questo è l'offset dal RSP in cui era presente quando FP reg è stata stabilita. Questo corrisponde all'istruzione FP reg meno l'offset reg FP (16 * il frame scalato registrare offset in UNWIND_INFO). Se viene utilizzata un'istruzione FP reg, quindi qualsiasi codice di rimozione che accetta un offset deve essere utilizzato solo dopo aver stabilito FP reg nel prologo.  
  
 Per tutti i codici operativi ad eccezione di UWOP_SAVE_XMM128 e UWOP_SAVE_XMM128_FAR, l'offset sarà sempre un multiplo di 8, perché tutti i valori dello stack di interesse vengono archiviati nei limiti di 8 byte (lo stesso stack è sempre allineato a 16 byte). Per i codici operativi che accettano un offset breve (meno di 512 KB), il nodo per il codice finale USHORT contiene l'offset diviso per 8. Per i codici operativi che accettano un offset lungo (512 KB < = offset < 4GB), i due nodi USHORT finali per questo codice contengono l'offset (in formato little-endian).  
  
 Per i codici operativi UWOP_SAVE_XMM128 e UWOP_SAVE_XMM128_FAR, l'offset sarà sempre un multiplo di 16, poiché tutte le operazioni XMM 128 bit devono verificarsi in memoria con allineamento a 16 byte. Pertanto, un fattore di scala pari a 16 verrà utilizzato per UWOP_SAVE_XMM128, consentendo l'offset di minore di 1 milione.  
  
 Il codice di operazione di rimozione è uno dei valori seguenti:  
  
 UWOP_PUSH_NONVOL (0) 1 nodo  
  
 Push di un registro integer non volatili, decremento RSP da 8. Le informazioni dell'operazione sono il numero del registro. Si noti che, a causa dei vincoli negli epiloghi, i codici di rimozione UWOP_PUSH_NONVOL devono visualizzati per primi nel prologo e di conseguenza, l'ultimo nella matrice di codice di rimozione. Questo ordinamento relativo si applica a tutti gli altri codici di rimozione ad eccezione di UWOP_PUSH_MACHFRAME.  
  
 UWOP_ALLOC_LARGE (1) 2 o 3 nodi  
  
 Allocare un'area di grandi dimensioni nello stack. Esistono due forme. Se invece è 0, la dimensione dell'allocazione divisa per 8 viene registrata nello slot successivo, consentendo un'allocazione fino a 512 KB - 8. Se le informazioni sul funzionamento è uguale a 1, quindi la dimensione dell'allocazione viene registrata in due slot successivi in formato little-endian, consentendo allocazioni fino a 4GB - 8.  
  
 Voce UWOP_ALLOC_SMALL (2) 1 nodo  
  
 Allocare un'area di piccole dimensioni nello stack. La dimensione dell'allocazione è il campo info * 8 + 8, consentendo allocazioni da 8 a 128 byte.  
  
 Il codice di rimozione per un'allocazione dello stack deve utilizzare sempre la codifica più breve possibile:  
  
|||  
|-|-|  
|**Dimensione di allocazione**|**Codice di rimozione**|  
|da 8 a 128 byte|VOCE UWOP_ALLOC_SMALL|  
|136 a 512 KB - 8 byte|UWOP_ALLOC_LARGE, informazioni sull'operazione = 0|  
|G 512 KB e 4-8 byte|UWOP_ALLOC_LARGE, informazioni sull'operazione = 1|  
  
 UWOP_SET_FPREG (3) 1 nodo  
  
 Stabilire il registro dei puntatori frame impostando la registrazione di un offset rispetto al valore corrente di RSP. L'offset è uguale al Frame Register offset (scalato) campo in UNWIND_INFO * 16, consentendo offset da 0 a 240. L'utilizzo di un offset permette di definire un puntatore ai frame che punta al centro dell'allocazione fissa dello stack, consentendo la densità di codice, consentendo più accessi di utilizzare i formati di istruzioni breve. Si noti che il campo info è riservato e non deve essere utilizzato.  
  
 UWOP_SAVE_NONVOL (4) 2 nodi  
  
 Salvare un registro integer non volatili nello stack utilizzando un'istruzione MOV anziché un PUSH. Viene utilizzato principalmente per il wrapping di riduzione, in cui viene salvato un registro non volatile nello stack in una posizione che è stata allocata in precedenza. Le informazioni dell'operazione sono il numero del registro. L'offset dello stack ridimensionato da 8 viene registrato nel successivo nello slot di codice dell'operazione di rimozione, come descritto nella nota precedente.  
  
 UWOP_SAVE_NONVOL_FAR (5) 3 nodi  
  
 Salvare un registro integer non volatili nello stack con un offset di tipo long, utilizzando un'istruzione MOV anziché un PUSH. Viene utilizzato principalmente per il wrapping di riduzione, in cui viene salvato un registro non volatile nello stack in una posizione che è stata allocata in precedenza. Le informazioni dell'operazione sono il numero del registro. L'offset dello stack viene registrato nei prossimi due slot di codice dell'operazione di rimozione come descritto sopra.  
  
 UWOP_SAVE_XMM128 (8) 2 nodi  
  
 Salvare tutti i 128 bit di un registro XMM non volatile nello stack. Le informazioni dell'operazione sono il numero del registro. L'offset in scala per 16 stack viene registrata nello slot successivo.  
  
 UWOP_SAVE_XMM128_FAR (9) 3 nodi  
  
 Salvare tutti i 128 bit di un registro XMM non volatile nello stack con un offset di tipo long. Le informazioni dell'operazione sono il numero del registro. L'offset dello stack viene registrata in due slot successivi.  
  
 UWOP_PUSH_MACHFRAME (10) 1 nodo  
  
 Push di una cornice di computer.  Viene utilizzato per registrare gli effetti di un'eccezione o un interrupt hardware. Esistono due forme. Se invece è 0, il seguente è stato inserito nello stack:  
  
|||  
|-|-|  
|RSP + 32|SS|  
|RSP + 24|Valore precedente di RSP|  
|RSP + 16|CONTENUTO|  
|RSP + 8|CS|  
|RSP|RIP|  
  
 Se invece è 1, quindi le operazioni seguenti invece è stata inserita:  
  
|||  
|-|-|  
|RSP + 40|SS|  
|RSP + 32|Valore precedente di RSP|  
|RSP + 24|CONTENUTO|  
|RSP + 16|CS|  
|RSP + 8|RIP|  
|RSP|Codice di errore|  
  
 Questo codice di rimozione verrà sempre visualizzate in un prologo fittizio, che non viene mai eseguito ma si precede il punto di ingresso reale di una routine di interrupt ed esiste solo per fornire una posizione per simulare il push di una cornice della macchina. UWOP_PUSH_MACHFRAME registra tale simulazione, che indica che la macchina concettualmente ha eseguito le operazioni seguenti:  
  
 Indirizzo del mittente RIP dall'inizio dello stack nel POP *Temp*  
  
 SS push  
  
 Push RSP precedente  
  
 Push contenuto  
  
 CS push  
  
 Push *Temp*  
  
 Inserisce il codice di errore (se info op è uguale a 1)  
  
 L'operazione UWOP_PUSH_MACHFRAME simulata decrementa RSP da 40 (info op è uguale a 0) o 48 (info op è uguale a 1).  
  
 **Informazioni sull'operazione**  
 Il significato di questi 4 bit dipende dal codice dell'operazione. Per codificare un registro generico (integer), viene utilizzato il mapping seguente:  
  
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
|8 e 15|R8 per R15|  
  
## <a name="see-also"></a>Vedere anche  
 [Dati di rimozione per la gestione delle eccezioni, supporto del debugger](../build/unwind-data-for-exception-handling-debugger-support.md)