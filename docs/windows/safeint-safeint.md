---
title: 'SafeInt:: SafeInt | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeInt::SafeInt
- SafeInt
- SafeInt.SafeInt
dev_langs:
- C++
helpviewer_keywords:
- SafeInt class, constructor
ms.assetid: 39e6f632-a396-40e6-9ece-cc3d4c5a78ef
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c7154349105c1953ad314b7928e7be8385179c42
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="safeintsafeint"></a>SafeInt::SafeInt
Costruisce un oggetto `SafeInt`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
SafeInt() throw  
  
SafeInt (  
   const T& i  
) throw ()  
  
SafeInt (  
   bool b  
) throw ()  
  
template <typename U>  
SafeInt (  
   const SafeInt <U, E>& u  
)  
  
I template <typename U>  
SafeInt (  
   const U& i  
)  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `i`  
 Il valore per il nuovo `SafeInt` oggetto. Deve trattarsi di un parametro di tipo T o U, a seconda del costruttore.  
  
 [in] `b`  
 Il valore booleano per il nuovo `SafeInt` oggetto.  
  
 [in] `u`  
 Oggetto `SafeInt` di tipo U. Il nuovo `SafeInt` oggetto avrà lo stesso valore di `u`, ma sarà di tipo T.  
  
 G  
 Il tipo di dati archiviati nel `SafeInt`. Può trattarsi di un valore booleano, un carattere o integer di tipo. Se è un tipo integer, può essere firmato o non firmato e compreso tra 8 e a 64 bit.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni sui tipi di modello `T` e `E`, vedere [classe SafeInt](../windows/safeint-class.md).  
  
 Il parametro di input per il costruttore, `i` o `u`, deve essere un tipo booleano, un carattere o integer. In caso di un altro tipo di parametro, il `SafeInt` classe chiamate [static_assert](../cpp/static-assert.md) per indicare un parametro di input non valido.  
  
 I costruttori che utilizzano il tipo di modello `U` convertire automaticamente il parametro di input nel tipo specificato da `T`. La `SafeInt` classe converte i dati senza alcuna perdita di dati. Segnala al gestore errori `E` se non è possibile convertire i dati al tipo `T` senza perdita di dati.  
  
 Se si crea un `SafeInt` da un parametro booleano, è necessario inizializzare il valore immediatamente. Non è possibile costruire un `SafeInt` utilizzando il codice `SafeInt<bool> sb;`. Verrà generato un errore di compilazione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** SafeInt. h  
  
 **Namespace:** msl::utilities  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria SafeInt](../windows/safeint-library.md)   
 [SafeInt (classe)](../windows/safeint-class.md)   
 [Classe SafeIntException](../windows/safeintexception-class.md)