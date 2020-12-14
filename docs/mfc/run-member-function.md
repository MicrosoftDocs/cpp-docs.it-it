---
description: 'Altre informazioni su: esecuzione della funzione membro'
title: Funzione membro Run
ms.date: 11/04/2016
helpviewer_keywords:
- WinMain method [MFC]
ms.assetid: 24ab7597-2354-495b-9a20-2c8ccc7385b3
ms.openlocfilehash: ae67c6b02344a65735ce06775b1d1788d1dabf2c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217822"
---
# <a name="run-member-function"></a>Funzione membro Run

Un'applicazione Framework trascorre la maggior parte del tempo nella funzione membro [Run](../mfc/reference/cwinapp-class.md#run) della classe [CWinApp](../mfc/reference/cwinapp-class.md). Dopo l'inizializzazione, `WinMain` chiama `Run` per elaborare il ciclo di messaggi.

`Run` scorre un ciclo di messaggi, verificando la presenza di messaggi disponibili nella coda di messaggi. Se un messaggio è disponibile, `Run` lo invia per l'azione. Se non è disponibile alcun messaggio, che è spesso true, le `Run` chiamate `OnIdle` a eseguono qualsiasi elaborazione del tempo di inattività che l'utente o il Framework potrebbe avere bisogno di eseguire. Se non sono presenti messaggi o elaborazioni nel tempo di inattività, l'applicazione resta in attesa fino al verificarsi di una qualsiasi azione. Quando l'applicazione termina, `Run` chiama `ExitInstance` . La figura nella [funzione membro OnIdle](../mfc/onidle-member-function.md) Mostra la sequenza di azioni nel ciclo di messaggi.

L'invio del messaggio dipende dal tipo di messaggio. Per ulteriori informazioni, vedere [messaggi e comandi nel Framework](../mfc/messages-and-commands-in-the-framework.md).

## <a name="see-also"></a>Vedi anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
