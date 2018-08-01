---
title: com_raise_error | Microsoft Docs
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
ms.openlocfilehash: 54cb2183bccc45446cd68b8d5d6d2753f571009b
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39408089"
---
# <a name="comraiseerror"></a>_com_raise_error
**Sezione specifica Microsoft**  
  
 Genera una [com_error](../cpp/com-error-class.md) in risposta a un errore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __stdcall _com_raise_error(  
   HRESULT hr,  
   IErrorInfo* perrinfo = 0  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *risorse umane*  
 Informazioni su HRESULT.  
  
 *perrinfo*  
 Oggetto `IErrorInfo`.  
  
## <a name="remarks"></a>Note  
 **com_raise_error**, che è definito nel \<Comdef. h >, può essere sostituito da una versione scritta dall'utente dello stesso nome e prototipo. Questa operazione può essere eseguita per utilizzare `#import` evitando la gestione delle eccezioni C++. In tal caso, una versione di utente **com_raise_error** potrebbe decidere di eseguire un `longjmp` o visualizzare una finestra di messaggio e halt. La versione dell'utente non deve effettuare restituzioni, perché il codice di supporto COM del compilatore non lo prevede.  
  
 È anche possibile usare [set_com_error_handler](../cpp/set-com-error-handler.md) per sostituire la funzione di gestione degli errori predefinito.  
  
 Per impostazione predefinita **com_raise_error** viene definito come segue:  
  
```cpp  
void __stdcall _com_raise_error(HRESULT hr, IErrorInfo* perrinfo) {  
   throw _com_error(hr, perrinfo);  
}  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<Comdef. h >  
  
 **Lib:** se il **wchar_t is tipo nativo** opzione del compilatore è attivato, utilizzare comsuppw. lib o comsuppwd. lib. Se **wchar_t is tipo nativo** è disattiva, utilizzare comsupp. lib. Per altre informazioni, vedere [/Zc:wchar_t (Tipo nativo wchar_t)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)   
 [_set_com_error_handler](../cpp/set-com-error-handler.md)