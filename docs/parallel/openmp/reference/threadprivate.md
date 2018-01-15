---
title: threadprivate | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: threadprivate
dev_langs: C++
helpviewer_keywords: threadprivate OpenMP directive
ms.assetid: 3515aaed-6f9d-4d59-85eb-342378bea2d3
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 25685991222b02f4c622f344b06e9faaea4caf02
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="threadprivate"></a>threadprivate
Specifica che una variabile privata di un thread.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma omp threadprivate(var)  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `var`  
 Un elenco delimitato da virgole delle variabili che si desidera rendere privato a un thread. `var`deve essere una variabile globale o dello spazio dei nomi-con ambito o una variabile locale statica.  
  
## <a name="remarks"></a>Note  
 Il `threadprivate` direttiva non supporta clausole OpenMP.  
  
 Per ulteriori informazioni, vedere [2.7.1 direttiva threadprivate](../../../parallel/openmp/2-7-1-threadprivate-directive.md).  
  
 Il `threadprivate` (direttiva) si basa sul [thread](../../../cpp/thread.md) `__declspec` attributo; limiti **declspec** si applicano a `threadprivate`.  
  
 Non è possibile utilizzare `threadprivate` in qualsiasi DLL che verrà caricato tramite [LoadLibrary](http://msdn.microsoft.com/library/windows/desktop/ms684175).  Sono incluse le DLL che vengono caricate con [/DELAYLOAD (importazione a caricamento ritardato)](../../../build/reference/delayload-delay-load-import.md), che utilizza anche **LoadLibrary**.  
  
 È possibile utilizzare `threadprivate` in una DLL viene caricata in modo statico all'avvio del processo.  
  
 Poiché `threadprivate` si basa sul **declspec**, `threadprivate` variabile sarà presenti in qualsiasi thread avviato il processo, non solo i thread che fanno parte di un gruppo di thread generato da un'area parallela.  Questo è un dettaglio di implementazione da tenere in considerazione, poiché è possibile, ad esempio, i costruttori per un `threadprivate` tipo definito dall'utente chiamato più spesso quella prevista.  
  
 Oggetto `threadprivate` variabile di tipo destructable non è garantito che il relativo distruttore chiamato.  Ad esempio:  
  
```  
struct MyType   
{  
    ~MyType();  
};  
  
MyType threaded_var;  
#pragma omp threadprivate(threaded_var)  
int main()   
{  
    #pragma omp parallel  
    {}  
}  
```  
  
 Gli utenti non dispongono di alcun controllo quando i thread che costituiscono l'area parallela comporta la terminazione.  Se tali thread è presente quando il processo viene chiuso, il thread non verrà notificato dell'uscita del processo e non verrà chiamato il distruttore per `threaded_var` in qualsiasi thread ad eccezione di quello che viene chiusa (, il thread principale).  In modo da codice non è necessario contare sulla corretta distruzione di `threadprivate` variabili.  
  
## <a name="example"></a>Esempio  
 Per un esempio dell'utilizzo di `threadprivate`, vedere [privata](../../../parallel/openmp/reference/private-openmp.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive](../../../parallel/openmp/reference/openmp-directives.md)