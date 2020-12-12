---
description: 'Altre informazioni su: Run-Time controllo degli errori'
title: Controllo degli errori di runtime
ms.date: 11/04/2016
helpviewer_keywords:
- run-time error checking
- run-time errors, checking
ms.assetid: c965dd01-57ad-4a3c-b1d6-5aa04f920501
ms.openlocfilehash: aff00bc66cd118b891e902328eb6ae85bd6fc14c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273605"
---
# <a name="run-time-error-checking"></a>Controllo degli errori di runtime

La libreria di runtime C contiene le funzioni che supportano i controlli degli errori di runtime (RTC). Il controllo degli errori di runtime consente di compilare il programma in modo che determinati tipi di errori di runtime vengano segnalati. Specificare come gli errori vengono segnalati e quali tipi di errori vengono segnalati. Per altre informazioni, vedere [Procedura: Usare controlli run-time nativi](/visualstudio/debugger/how-to-use-native-run-time-checks).

Utilizzare le seguenti funzioni per personalizzare il modo in cui il programma esegue il controllo degli errori di runtime.

## <a name="run-time-error-checking-functions"></a>Funzioni di controllo degli errori di runtime

|Funzione|Usa|
|--------------|---------|
|[_RTC_GetErrDesc](../c-runtime-library/reference/rtc-geterrdesc.md)|Restituisce una breve descrizione di un tipo di controllo degli errori di runtime.|
|[_RTC_NumErrors](../c-runtime-library/reference/rtc-numerrors.md)|Restituisce il numero totale di errori che possono essere rilevati dai controlli degli errori di runtime.|
|[_RTC_SetErrorFunc](../c-runtime-library/reference/rtc-seterrorfunc.md)|Definisce una funzione come gestore per la segnalazione dei controlli degli errori di runtime.|
|[_RTC_SetErrorType](../c-runtime-library/reference/rtc-seterrortype.md)|Associa un errore che viene rilevato dai controlli degli errori di runtime con un tipo.|

## <a name="see-also"></a>Vedi anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
[/RTC (controlli degli errori di run-time)](../build/reference/rtc-run-time-error-checks.md)<br/>
[runtime_checks](../preprocessor/runtime-checks.md)<br/>
[Routine di debug](../c-runtime-library/debug-routines.md)<br/>
