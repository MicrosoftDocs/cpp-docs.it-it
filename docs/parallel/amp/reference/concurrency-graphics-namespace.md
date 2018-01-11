---
title: 'Concurrency:: Graphics Namespace | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: AMP_GRAPHICS/Concurrency
dev_langs: C++
ms.assetid: 4529d3b1-d7da-4ffb-82bf-080915e0f23e
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: aef7e219190584ec91b08e9c44b4c921ec91d787
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="concurrencygraphics-namespace"></a>Spazio dei nomi Concurrency::graphics
Lo spazio dei nomi di grafica fornisce tipi e funzioni che sono progettate per la programmazione grafica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace graphics;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="namespaces"></a>Namespaces  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Spazio dei nomi Concurrency::graphics::direct3d](concurrency-graphics-direct3d-namespace.md)|Fornisce funzioni per l'interoperabilità di Direct3D.|  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`uint`|Il tipo di elemento per [classe uint_2](uint-2-class.md), [classe uint_3](uint-3-class.md), e [classe uint_4](uint-4-class.md). Definito come `typedef unsigned int uint;`.|  
  
### <a name="enumerations"></a>Enumerazioni  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Enumerazione address_mode](concurrency-graphics-namespace-enums.md#address_mode).|Specifica la modalità di indirizzo è supportata per campionamento delle trame.|  
|[Enumerazione filter_mode](concurrency-graphics-namespace-enums.md#filter_mode)|Specifica la modalità di filtro è supportata per campionamento delle trame.|  
  
### <a name="classes"></a>Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe texture](texture-class.md)|Una trama è un'aggregazione su un accelerator_view nel dominio extent di dati. È una raccolta di variabili, uno per ogni elemento in un dominio di extent. Ogni variabile contiene un valore corrispondente al tipo primitivo di C++ (unsigned int, int, float, double) o norm tipo scalare, o unorm (definito in Concurrency:: Graphics) o tipi short vector idonei definito nel Concurrency:: Graphics.|  
|[Classe writeonly_texture_view](writeonly-texture-view-class.md)|Un writeonly_texture_view writeonly accedere su una trama.|  
|[Classe double_2](double-2-class.md)|Rappresenta un vettore short di 2 `double` valori.|  
|[Classe double_3](double-3-class.md)|Rappresenta un vettore short 3 `double` valori.|  
|[Classe double_4](double-4-class.md)|Rappresenta uno short vector di 4 `double` valori.|  
|[Classe float_2](float-2-class.md)|Rappresenta un vettore short di 2 `float` valori.|  
|[Classe float_3](float-3-class.md)|Rappresenta un vettore short 3 `float` valori.|  
|[Classe float_4](float-4-class.md)|Rappresenta uno short vector di 4 `float` valori.|  
|[Classe int_2](int-2-class.md)|Rappresenta un vettore short di 2 `int` valori.|  
|[Classe int_3](int-3-class.md)|Rappresenta un vettore short 3 `int` valori.|  
|[Classe int_4](int-4-class.md)|Rappresenta uno short vector di 4 `int` valori.|  
|[Classe norm_2](norm-2-class.md)|Rappresenta un vettore short di 2 `norm` valori.|  
|[Classe norm_3](norm-3-class.md)|Rappresenta un vettore short 3 `norm` valori.|  
|[Classe norm_4](norm-4-class.md)|Rappresenta uno short vector di 4 `norm` valori.|  
|[Classe uint_2](uint-2-class.md)|Rappresenta un vettore short di 2 `uint` valori.|  
|[Classe uint_3](uint-3-class.md)|Rappresenta un vettore short 3 `uint` valori.|  
|[Classe uint_4](uint-4-class.md)|Rappresenta uno short vector di 4 `uint` valori.|  
|[Classe unorm_2](unorm-2-class.md)|Rappresenta un vettore short di 2 `unorm` valori.|  
|[Classe unorm_3](unorm-3-class.md)|Rappresenta un vettore short 3 `unorm` valori.|  
|[Classe unorm_4](unorm-4-class.md)|Rappresenta uno short vector di 4 `unorm` valori.|  
|[Classe sampler](sampler-class.md)|Rappresenta la configurazione del campionatore utilizzata per campionamento delle trame.|  
|[Struttura short_vector](short-vector-structure.md)|Fornisce un'implementazione di base di uno short vector di valori.|  
|[Struttura short_vector_traits](short-vector-traits-structure.md)|Vengono fornite per il recupero della lunghezza e tipo di uno short vector.|  
|[Classe texture_view](texture-view-class.md)|Fornisce accesso in lettura e scrittura su una trama.|  
  
### <a name="functions"></a>Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[copy](concurrency-graphics-namespace-functions.md#copy)|Di overload. Copia il contenuto della trama di origine del buffer dell'host di destinazione.|  
|[copy_async](concurrency-graphics-namespace-functions.md#copy_async)|Di overload. Copia in modo asincrono il contenuto della trama di origine del buffer dell'host di destinazione.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_graphics.h  
  
 **Spazio dei nomi:** Concurrency  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
