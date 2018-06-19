---
title: 'Procedura: creare e utilizzare istanze CComPtr e CComQIPtr | Documenti Microsoft'
ms.custom: how-to
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: b0356cfb-12cc-4ee8-b988-8311ed1ab5e0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6c63eb1657cd00580197e0571a40e9a7545688dd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32415452"
---
# <a name="how-to-create-and-use-ccomptr-and-ccomqiptr-instances"></a>Procedura: creare e utilizzare istanze CComPtr e CComQIPtr
Nella programmazione Windows classica le librerie sono spesso implementate come oggetti COM (o, più precisamente, come server COM). Molti componenti del sistema operativo Windows sono implementati come server COM e molti autori forniscono librerie in questa forma. Per informazioni sui fondamenti di COM, vedere [Component Object Model (COM)](http://msdn.microsoft.com/en-us/3578ca42-a4b6-44b3-ad5b-aeb5fa61f3f4).  
  
 Quando si crea un'istanza di un oggetto COM (Component Object Model), archiviare il puntatore di interfaccia in un puntatore COM intelligente che esegue il conteggio dei riferimenti tramite chiamate a `AddRef` e `Release` nel distruttore. Se si usa la libreria ATL (Active Template Library) o MFC (Microsoft Foundation Class), ricorrere al puntatore intelligente `CComPtr` . Se non si usa ATL o MFC, ricorrere a `_com_ptr_t`. Poiché non esiste un equivalente COM di `std::unique_ptr`, usare questi puntatori intelligenti per entrami gli scenari a proprietario singolo e a più proprietari. Sia `CComPtr` che `ComQIPtr` supportano le operazioni di spostamento con riferimenti rvalue.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra come usare `CComPtr` per creare un'istanza di un oggetto COM e ottenere puntatori alle sue interfacce. Si noti che, per creare l'oggetto COM, viene usata la funzione membro `CComPtr::CoCreateInstance` anziché la funzione Win32 con lo stesso nome.  
  
 [!code-cpp[COM_smart_pointers#01](../cpp/codesnippet/CPP/how-to-create-and-use-ccomptr-and-ccomqiptr-instances_1.cpp)]  
  
 `CComPtr` e dei relativi componenti fanno parte di ATL e sono definiti in \<atlcomcli. h >. `_com_ptr_t` viene dichiarato in \<comip >. Il compilatore crea specializzazioni di `_com_ptr_t` quando genera classi wrapper per le librerie dei tipi.  
  
## <a name="example"></a>Esempio  
 ATL fornisce anche `CComQIPtr`che presenta una sintassi più semplice per interrogare un oggetto COM e recuperare un'interfaccia aggiuntiva. È tuttavia consigliabile usare `CComPtr` perché fa tutto ciò che può fare `CComQIPtr` ed è semanticamente più coerente con i puntatori di interfaccia COM non elaborati. Se si usa un `CComPtr` per eseguire una query per un'interfaccia, il nuovo puntatore di interfaccia viene inserito in un parametro out. Se la chiamata non riesce, viene restituito un HRESULT, conformemente al tipico modello COM. Con `CComQIPtr`, il valore restituito è il puntatore stesso e, se la chiamata non riesce, non è possibile accedere al valore interno HRESULT restituito. Le due righe seguenti mostrano le differenze fra i meccanismi di gestione degli errori in `CComPtr` e `CComQIPtr` .  
  
 [!code-cpp[COM_smart_pointers#02](../cpp/codesnippet/CPP/how-to-create-and-use-ccomptr-and-ccomqiptr-instances_2.cpp)]  
  
## <a name="example"></a>Esempio  
 `CComPtr` fornisce una specializzazione per IDispatch che consente di archiviare puntatori a componenti di automazione COM e richiamare i metodi sull'interfaccia usando l'associazione tardiva. `CComDispatchDriver` è un typedef per `CComQIPtr<IDispatch, &IIDIDispatch>`, che è implicitamente convertibile in `CComPtr<IDispatch>`. Pertanto, quando uno di questi tre nomi appare nel codice, è equivalente a `CComPtr<IDispatch>`. L'esempio seguente mostra come ottenere un puntatore al modello a oggetti di Microsoft Word usando un `CComPtr<IDispatch>`.  
  
 [!code-cpp[COM_smart_pointers#03](../cpp/codesnippet/CPP/how-to-create-and-use-ccomptr-and-ccomqiptr-instances_3.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md)