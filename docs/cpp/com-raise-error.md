---
title: com_raise_error | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_raise_error
dev_langs:
- C++
helpviewer_keywords:
- _com_raise_error function
ms.assetid: a98226c2-c3fe-44f1-8ff5-85863de11cd6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4e7b28c9d48704eede883cbcd387d9e77798647f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="comraiseerror"></a>_com_raise_error
**Sezione specifica Microsoft**  
  
 Genera un [com_error](../cpp/com-error-class.md) in risposta a un errore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      void __stdcall _com_raise_error(  
   HRESULT hr,  
   IErrorInfo* perrinfo = 0  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `hr`  
 Informazioni `HRESULT`.  
  
 `perrinfo`  
 **IErrorInfo** oggetto.  
  
## <a name="remarks"></a>Note  
 `_com_raise_error`, definito in \<Comdef. h >, può essere sostituita da una versione scritta dall'utente con lo stesso nome e prototipo. Questa operazione può essere eseguita per utilizzare `#import` evitando la gestione delle eccezioni C++. In tal caso, una versione di utente di **com_raise_error** potrebbe decidere di eseguire un `longjmp` o visualizzare una finestra di messaggio e interrotto. La versione dell'utente non deve effettuare restituzioni, perché il codice di supporto COM del compilatore non lo prevede.  
  
 È inoltre possibile utilizzare [set_com_error_handler](../cpp/set-com-error-handler.md) per sostituire la funzione di gestione degli errori predefinita.  
  
 Per impostazione predefinita, `_com_raise_error` viene definito come segue:  
  
```  
void __stdcall _com_raise_error(HRESULT hr, IErrorInfo* perrinfo) {  
   throw _com_error(hr, perrinfo);  
}  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<Comdef. h >  
  
 **Lib:** se il **wchar_t è il tipo nativo** opzione del compilatore è attiva, utilizzare comsuppw. lib o comsuppwd. lib. Se **wchar_t è il tipo nativo** è disattiva, utilizzare comsupp.lib. Per altre informazioni, vedere [/Zc:wchar_t (Tipo nativo wchar_t)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)   
 [_set_com_error_handler](../cpp/set-com-error-handler.md)