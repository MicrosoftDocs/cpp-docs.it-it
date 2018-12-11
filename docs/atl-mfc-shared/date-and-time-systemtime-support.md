---
title: 'Data e ora: Supporto per SYSTEMTIME'
ms.date: 11/04/2016
f1_keywords:
- SYSTEMTIME
helpviewer_keywords:
- system time
- FILETIME structure, with CTime class
- time [C++], formatting
- SYSTEMTIME structure
- dates [C++], MFC
- formatting [C++], time
ms.assetid: 201528e4-2ffa-48fc-af8f-203aa86d942a
ms.openlocfilehash: db19d236d0f0d8672f08c808237de471bf5bc64d
ms.sourcegitcommit: 975098222db3e8b297607cecaa1f504570a11799
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2018
ms.locfileid: "53177733"
---
# <a name="date-and-time-systemtime-support"></a>Data e ora: Supporto per SYSTEMTIME

Il [CTime](../atl-mfc-shared/reference/ctime-class.md) classe dispone di costruttori che accettano le ore di sistema e file da Win32. Se si usano gli oggetti `CTime` per tali scopi, è necessario modificarne di conseguenza l'inizializzazione, come descritto in questo articolo.

Per informazioni sulla struttura SYSTEMTIME, vedere [SYSTEMTIME](https://msdn.microsoft.com/library/windows/desktop/ms724950). Per informazioni sulla struttura FILETIME, vedere [FILETIME](https://msdn.microsoft.com/library/windows/desktop/ms724284).

MFC fornisce ancora i costruttori di `CTime` che accettano argomenti dell'ora in formato MS-DOS, ma a partire da MFC versione 3.0, la classe `CTime` supporta anche un costruttore che accetta una struttura `SYSTEMTIME` di Win32 e un altro che accetta la struttura `FILETIME` di Win32.

I nuovi costruttori di `CTime` sono:

- CTime (SYSTEMTIME const & `sysTime`);

- CTime (FILETIME const & `fileTime`);

Il *fileTime* parametro è un riferimento a un Win32 `FILETIME` struttura, che rappresenta l'ora come valore a 64 bit, un formato più pratico per l'archiviazione interna rispetto a un `SYSTEMTIME` struttura e il formato usato da Win32 per rappresenta il tempo di creazione del file.

Se il codice contiene un oggetto `CTime` inizializzato con l'ora di sistema, è consigliabile usare il costruttore `SYSTEMTIME` in Win32.

Non è molto probabile che userà `CTime` `FILETIME` direttamente l'inizializzazione. Se si usa un' `CFile` oggetto per modificare un file, [CFile:: GetStatus](../mfc/reference/cfile-class.md#getstatus) recupera il file timestamp per l'utente tramite un `CTime` oggetto inizializzato con un `FILETIME` struttura.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Programmazione di tempo in MFC e data generale](../atl-mfc-shared/date-and-time.md)

- [Supporto di automazione di data e ora programmazione](../atl-mfc-shared/date-and-time-automation-support.md)

## <a name="see-also"></a>Vedere anche

[Data e ora](../atl-mfc-shared/date-and-time.md)
