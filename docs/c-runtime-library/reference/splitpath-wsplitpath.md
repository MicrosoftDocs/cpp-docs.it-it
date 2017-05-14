---
title: _splitpath, _wsplitpath | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wsplitpath
- _splitpath
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- wsplitpath
- _splitpath
- splitpath
- _wsplitpath
- _tsplitpath
dev_langs:
- C++
helpviewer_keywords:
- _splitpath function
- pathnames
- wsplitpath function
- splitpath function
- _wsplitpath function
- tsplitpath function
- path names
- _tsplitpath function
ms.assetid: 32bd76b5-1385-4ee8-a64c-abcb541cd2e4
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: bbd6a163df9daf8e699f3ecf52325786fe89d8ea
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="splitpath-wsplitpath"></a>_splitpath, _wsplitpath
Suddivide un nome di percorso nei componenti. Sono disponibili versioni più sicure di queste funzioni. Vedere [_splitpath_s, _wsplitpath_s](../../c-runtime-library/reference/splitpath-s-wsplitpath-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _splitpath(  
   const char *path,  
   char *drive,  
   char *dir,  
   char *fname,  
   char *ext   
);  
void _wsplitpath(  
   const wchar_t *path,  
   wchar_t *drive,  
   wchar_t *dir,  
   wchar_t *fname,  
   wchar_t *ext   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `path`  
 Percorso completo.  
  
 `drive`  
 Lettera di unità, seguita da due punti (`:`). È possibile passare `NULL` per questo parametro se non è necessaria la lettera di unità.  
  
 `dir`  
 Percorso di directory, inclusa la barra finale. È possibile usare barre ( `/` ), barre rovesciate ( `\` ) o entrambe. È possibile passare `NULL` per questo parametro se non è necessario il percorso di directory.  
  
 `fname`  
 Nome di file di base (senza estensione). È possibile passare `NULL` per questo parametro se non è necessario il nome di file.  
  
 `ext`  
 Estensione del nome di file, incluso il punto iniziale (`.`). È possibile passare `NULL` per questo parametro se non è necessaria l'estensione del nome di file.  
  
## <a name="remarks"></a>Note  
 La funzione `_splitpath` suddivide un percorso nei suoi quattro componenti. `_splitpath` gestisce automaticamente e in modo appropriato gli argomenti stringa di caratteri multibyte, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso. `_wsplitpath` è una versione a caratteri "wide" di `_splitpath`. Gli argomenti per `_wsplitpath` sono stringhe a caratteri "wide". A parte ciò, queste funzioni si comportano in modo identico.  
  
 **Nota sulla sicurezza** Queste funzioni sono esposte a una potenziale minaccia dovuta a un problema di sovraccarico del buffer. I problemi di sovraccarico del buffer sono usati spesso come metodo di attacco di sistema e provocano un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795). Sono disponibili versioni più sicure di queste funzioni. Vedere [_splitpath_s, _wsplitpath_s](../../c-runtime-library/reference/splitpath-s-wsplitpath-s.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tsplitpath`|`_splitpath`|`_splitpath`|`_wsplitpath`|  
  
 Ogni componente del percorso completo è archiviato in un buffer separato. Le costanti manifeste `_MAX_DRIVE`, `_MAX_DIR`, `_MAX_FNAME` e `_MAX_EXT` (definite in STDLIB.H) specificano le dimensioni massime per ogni componente del file. I componenti del file più grandi delle costanti manifeste corrispondenti causano il danneggiamento dell'heap.  
  
 Ogni buffer deve essere di dimensioni pari alla costante manifesta corrispondente per evitare potenziali sovraccarichi del buffer.  
  
 La tabella seguente elenca i valori delle costanti manifeste.  
  
|Nome|Valore|  
|----------|-----------|  
|_MAX_DRIVE|3|  
|_MAX_DIR|256|  
|_MAX_FNAME|256|  
|_MAX_EXT|256|  
  
 Se il percorso completo non contiene un componente (ad esempio, un nome di file), `_splitpath` assegna stringhe vuote ai buffer corrispondenti.  
  
 È possibile passare `NULL` a `_splitpath` per qualsiasi parametro diverso da `path` non necessario.  
  
 Se `path` è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `EINVAL`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_splitpath`|\<stdlib.h>|  
|`_wsplitpath`|\<stdlib.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [_makepath](../../c-runtime-library/reference/makepath-wmakepath.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [_fullpath, _wfullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)   
 [_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [_makepath, _wmakepath](../../c-runtime-library/reference/makepath-wmakepath.md)   
 [_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [_splitpath_s, _wsplitpath_s](../../c-runtime-library/reference/splitpath-s-wsplitpath-s.md)
