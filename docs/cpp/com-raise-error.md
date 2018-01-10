---
title: com_raise_error | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _com_raise_error
dev_langs: C++
helpviewer_keywords: _com_raise_error function
ms.assetid: a98226c2-c3fe-44f1-8ff5-85863de11cd6
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cfb51d4188917ebcdbad2fead13a9792875d2f11
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 `_com_raise_error`, definito in comdef.h, può essere sostituito con una versione scritta dall'utente avente lo stesso nome e prototipo. Questa operazione può essere eseguita per utilizzare `#import` evitando la gestione delle eccezioni C++. In tal caso, una versione di utente di **com_raise_error** potrebbe decidere di eseguire un `longjmp` o visualizzare una finestra di messaggio e interrotto. La versione dell'utente non deve effettuare restituzioni, perché il codice di supporto COM del compilatore non lo prevede.  
  
 È inoltre possibile utilizzare [set_com_error_handler](../cpp/set-com-error-handler.md) per sostituire la funzione di gestione degli errori predefinita.  
  
 Per impostazione predefinita, `_com_raise_error` viene definito come segue:  
  
```  
void __stdcall _com_raise_error(HRESULT hr, IErrorInfo* perrinfo) {  
   throw _com_error(hr, perrinfo);  
}  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Comdef. h  
  
 **Lib:** se il **wchar_t è il tipo nativo** l'opzione del compilatore è attivato, utilizzare comsuppw.lib o comsuppwd.lib. Se **wchar_t è il tipo nativo** è disattiva, utilizzare comsupp.lib. Per altre informazioni, vedere [/Zc:wchar_t (Tipo nativo wchar_t)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)   
 [_set_com_error_handler](../cpp/set-com-error-handler.md)