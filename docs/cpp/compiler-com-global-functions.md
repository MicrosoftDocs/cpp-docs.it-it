---
title: Funzioni globali COM del compilatore
ms.date: 11/04/2016
helpviewer_keywords:
- cl.exe compiler, COM support
- COM, compiler support
ms.assetid: 74449d26-50a2-47c7-b175-7cf2cf83533e
ms.openlocfilehash: ac74270cd020aa66ccc14ff314a00b388a038086
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399187"
---
# <a name="compiler-com-global-functions"></a>Funzioni globali COM del compilatore

**Sezione specifica Microsoft**

Sono disponibili le routine seguenti:

|Funzione|Descrizione|
|--------------|-----------------|
|[_com_raise_error](../cpp/com-raise-error.md)|Genera una [com_error](../cpp/com-error-class.md) in risposta a un errore.|
|[_set_com_error_handler](../cpp/set-com-error-handler.md)|Sostituisce la funzione predefinita utilizzata per la gestione degli errori COM.|
|[ConvertBSTRToString](../cpp/convertbstrtostring.md)|Converte un `BSTR` valore per un `char *`.|
|[ConvertStringToBSTR](../cpp/convertstringtobstr.md)|Converte un `char *` valore per un `BSTR`.|

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)<br/>
[Supporto COM del compilatore](../cpp/compiler-com-support.md)