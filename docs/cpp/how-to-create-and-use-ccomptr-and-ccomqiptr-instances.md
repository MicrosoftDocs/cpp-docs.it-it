---
title: 'Procedura: Creare e usare istanze CComPtr e CComQIPtr'
ms.custom: how-to
ms.date: 11/19/2019
ms.topic: conceptual
ms.assetid: b0356cfb-12cc-4ee8-b988-8311ed1ab5e0
ms.openlocfilehash: 4d3a9f98f4f4111e88a41f9d4a96cb3caefe64d8
ms.sourcegitcommit: 94893973211d0b254c8bcdcf0779997dcc136b0c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/28/2020
ms.locfileid: "91414633"
---
# <a name="how-to-create-and-use-ccomptr-and-ccomqiptr-instances"></a>Procedura: Creare e usare istanze CComPtr e CComQIPtr

Nella programmazione Windows classica le librerie sono spesso implementate come oggetti COM (o, più precisamente, come server COM). Molti componenti del sistema operativo Windows sono implementati come server COM e molti autori forniscono librerie in questa forma. Per informazioni sui fondamenti di COM, vedere [Component Object Model (COM)](/windows/win32/com/component-object-model--com--portal).

Quando si crea un'istanza di un oggetto COM (Component Object Model), archiviare il puntatore di interfaccia in un puntatore COM intelligente che esegue il conteggio dei riferimenti tramite chiamate a `AddRef` e `Release` nel distruttore. Se si usa la libreria ATL (Active Template Library) o MFC (Microsoft Foundation Class), ricorrere al puntatore intelligente `CComPtr` . Se non si usa ATL o MFC, ricorrere a `_com_ptr_t`. Poiché non esiste un equivalente COM di `std::unique_ptr`, usare questi puntatori intelligenti per entrami gli scenari a proprietario singolo e a più proprietari. Sia `CComPtr` che `ComQIPtr` supportano le operazioni di spostamento con riferimenti rvalue.

## <a name="example-ccomptr"></a>Esempio: CComPtr

L'esempio seguente illustra come usare `CComPtr` per creare un'istanza di un oggetto COM e ottenere puntatori alle sue interfacce. Si noti che, per creare l'oggetto COM, viene usata la funzione membro `CComPtr::CoCreateInstance` anziché la funzione Win32 con lo stesso nome.

[!code-cpp[COM_smart_pointers#01](../cpp/codesnippet/CPP/how-to-create-and-use-ccomptr-and-ccomqiptr-instances_1.cpp)]

`CComPtr` e i relativi parenti fanno parte di ATL e sono definiti in \<atlcomcli.h> . `_com_ptr_t` è dichiarato in \<comip.h> . Il compilatore crea specializzazioni di `_com_ptr_t` quando genera classi wrapper per le librerie dei tipi.

## <a name="example-ccomqipt"></a>Esempio: CComQIPt

ATL fornisce anche `CComQIPtr`che presenta una sintassi più semplice per interrogare un oggetto COM e recuperare un'interfaccia aggiuntiva. È tuttavia consigliabile usare `CComPtr` perché fa tutto ciò che può fare `CComQIPtr` ed è semanticamente più coerente con i puntatori di interfaccia COM non elaborati. Se si usa un `CComPtr` per eseguire una query per un'interfaccia, il nuovo puntatore di interfaccia viene inserito in un parametro out. Se la chiamata non riesce, viene restituito un HRESULT, conformemente al tipico modello COM. Con `CComQIPtr`, il valore restituito è il puntatore stesso e, se la chiamata non riesce, non è possibile accedere al valore interno HRESULT restituito. Le due righe seguenti mostrano le differenze fra i meccanismi di gestione degli errori in `CComPtr` e `CComQIPtr` .

[!code-cpp[COM_smart_pointers#02](../cpp/codesnippet/CPP/how-to-create-and-use-ccomptr-and-ccomqiptr-instances_2.cpp)]

## <a name="example-idispatch"></a>Esempio: IDispatch

`CComPtr` fornisce una specializzazione per IDispatch che consente di archiviare puntatori a componenti di automazione COM e richiamare i metodi sull'interfaccia usando l'associazione tardiva. `CComDispatchDriver` è un typedef per `CComQIPtr<IDispatch, &IIDIDispatch>`, che è implicitamente convertibile in `CComPtr<IDispatch>`. Pertanto, quando uno di questi tre nomi appare nel codice, è equivalente a `CComPtr<IDispatch>`. L'esempio seguente mostra come ottenere un puntatore al modello a oggetti di Microsoft Word usando un `CComPtr<IDispatch>`.

[!code-cpp[COM_smart_pointers#03](../cpp/codesnippet/CPP/how-to-create-and-use-ccomptr-and-ccomqiptr-instances_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Puntatori intelligenti (C++ moderno)](../cpp/smart-pointers-modern-cpp.md)
