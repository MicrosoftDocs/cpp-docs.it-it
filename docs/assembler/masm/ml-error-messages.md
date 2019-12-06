---
title: Messaggi di errore ML
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- vc.errors.ml
helpviewer_keywords:
- MASM (Microsoft Macro Assembler), ML error messages
ms.assetid: e7e164b3-6d65-4b5b-8925-bfbebc043523
ms.openlocfilehash: 2db928d22219d33f89396bb29530680d4b3c8dba
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74856943"
---
# <a name="ml-error-messages"></a>Messaggi di errore ML

I messaggi di errore generati dai componenti MASM rientrano in tre categorie:

- **Errori irreversibili.** Che indicano un problema grave che impedisce all'utilità di completare il normale processo.

- **Errori non irreversibili.** L'utilità può completare il processo. In caso contrario, è probabile che il risultato non sia quello desiderato.

- **Avvisi.** Questi messaggi indicano le condizioni che possono impedire di ottenere i risultati desiderati.

Tutti i messaggi di errore hanno il formato seguente:

> *Utilità*: *nomefile* (*riga*): {*Error_type*} (*codice*): *Message_text*

dove:

\ di *utilità*
Programma che ha inviato il messaggio di errore.

\ *filename*
Il file che contiene la condizione di generazione degli errori.

\ *linea*
Riga approssimativa in cui è presente la condizione di errore.

*Error_type*\
Errore irreversibile, errore o avviso.

*Codice*\
Codice di errore univoco a 5 o 6 cifre.

*Message_text*\
Descrizione breve e generale della condizione di errore.

## <a name="see-also"></a>Vedere anche

[Guida di riferimento a Microsoft Macro Assembler](../../assembler/masm/microsoft-macro-assembler-reference.md)
