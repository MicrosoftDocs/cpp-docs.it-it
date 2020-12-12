---
description: 'Altre informazioni su: costanti di autorizzazione file'
title: Costanti di autorizzazione file
ms.date: 11/04/2016
helpviewer_keywords:
- S_IWRITE constant
- constants [C++], file attributes
- S_IREAD constant
- file permissions [C++]
- _S_IWRITE constant
- _S_IREAD constant
ms.assetid: 593cad33-31d1-44d2-8941-8af7d210c88c
ms.openlocfilehash: a220ec404202b1f962a4c0bf51d20b7eea2720ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331076"
---
# <a name="file-permission-constants"></a>Costanti di autorizzazione file

## <a name="syntax"></a>Sintassi

```
#include <sys/stat.h>
```

## <a name="remarks"></a>Osservazioni

Una di queste costanti è necessaria quando `_O_CREAT` (`_open`, `_sopen`) viene specificato.

L'argomento `pmode` specifica le impostazioni di autorizzazione del file come segue.

|Costante|Significato|
|--------------|-------------|
|`_S_IREAD`|Lettura consentita|
|`_S_IWRITE`|Scrittura consentita|
|`_S_IREAD` &#124; `_S_IWRITE`|Lettura e scrittura consentite|

Una volta utilizzato come argomento `pmode` per `_umask`, la costante manifesto imposta l'impostazione di autorizzazione, come illustrato di seguito.

|Costante|Significato|
|--------------|-------------|
|`_S_IREAD`|Scrittura non consentita (file di sola lettura)|
|`_S_IWRITE`|Lettura non consentita (file di sola scrittura)|
|`_S_IREAD` &#124; `_S_IWRITE`|Lettura e scrittura non consentite|

## <a name="see-also"></a>Vedi anche

[_open, _wopen](../c-runtime-library/reference/open-wopen.md)<br/>
[_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md)<br/>
[_umask](../c-runtime-library/reference/umask.md)<br/>
[Tipi standard](../c-runtime-library/standard-types.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
