---
title: pianificazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- schedule
dev_langs:
- C++
helpviewer_keywords:
- schedule OpenMP clause
ms.assetid: 286f1fc3-6598-4837-b4c8-8b1fa3193965
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bc2a91a87504b72ddbd296e31516608451286b04
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="schedule"></a>pianificazione
Si applica al [per](../../../parallel/openmp/reference/for-openmp.md) direttiva.  
  
## <a name="syntax"></a>Sintassi  
  
```  
schedule(type[,size])  
```  
  
#### <a name="parameters"></a>Parametri  
 `type`  
 Il tipo di pianificazione:  
  
-   `dynamic`  
  
-   `guided`  
  
-   `runtime`  
  
-   `static`  
  
 `size` (facoltativo)  
 Specifica le dimensioni di iterazioni. `size` deve essere un numero intero. Non è valido quando `type` è `runtime`.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [2.4.1 costrutto for](../../../parallel/openmp/2-4-1-for-construct.md).  
  
## <a name="example"></a>Esempio  
  
```  
// omp_schedule.cpp  
// compile with: /openmp   
#include <windows.h>  
#include <stdio.h>  
#include <omp.h>  
  
#define NUM_THREADS 4  
#define STATIC_CHUNK 5  
#define DYNAMIC_CHUNK 5  
#define NUM_LOOPS 20  
#define SLEEP_EVERY_N 3  
  
int main( )   
{  
    int nStatic1[NUM_LOOPS],   
        nStaticN[NUM_LOOPS];  
    int nDynamic1[NUM_LOOPS],   
        nDynamicN[NUM_LOOPS];  
    int nGuided[NUM_LOOPS];  
  
    omp_set_num_threads(NUM_THREADS);  
  
    #pragma omp parallel  
    {  
        #pragma omp for schedule(static, 1)  
        for (int i = 0 ; i < NUM_LOOPS ; ++i)   
        {  
            if ((i % SLEEP_EVERY_N) == 0)   
                Sleep(0);  
            nStatic1[i] = omp_get_thread_num( );  
        }  
  
        #pragma omp for schedule(static, STATIC_CHUNK)  
        for (int i = 0 ; i < NUM_LOOPS ; ++i)   
        {  
            if ((i % SLEEP_EVERY_N) == 0)   
                Sleep(0);  
            nStaticN[i] = omp_get_thread_num( );  
        }  
  
        #pragma omp for schedule(dynamic, 1)  
        for (int i = 0 ; i < NUM_LOOPS ; ++i)   
        {  
            if ((i % SLEEP_EVERY_N) == 0)   
                Sleep(0);  
            nDynamic1[i] = omp_get_thread_num( );  
        }  
  
        #pragma omp for schedule(dynamic, DYNAMIC_CHUNK)  
        for (int i = 0 ; i < NUM_LOOPS ; ++i)   
        {  
            if ((i % SLEEP_EVERY_N) == 0)   
                Sleep(0);  
            nDynamicN[i] = omp_get_thread_num( );  
        }  
  
        #pragma omp for schedule(guided)  
        for (int i = 0 ; i < NUM_LOOPS ; ++i)   
        {  
            if ((i % SLEEP_EVERY_N) == 0)   
                Sleep(0);  
            nGuided[i] = omp_get_thread_num( );  
        }  
    }  
  
    printf_s("------------------------------------------------\n");  
    printf_s("| static | static | dynamic | dynamic | guided |\n");  
    printf_s("|    1   |    %d   |    1    |    %d    |        |\n",  
             STATIC_CHUNK, DYNAMIC_CHUNK);  
    printf_s("------------------------------------------------\n");  
  
    for (int i=0; i<NUM_LOOPS; ++i)   
    {  
        printf_s("|    %d   |    %d   |    %d    |    %d    |"  
                 "    %d   |\n",  
                 nStatic1[i], nStaticN[i],  
                 nDynamic1[i], nDynamicN[i], nGuided[i]);  
    }  
  
    printf_s("------------------------------------------------\n");  
}  
```  
  
```Output  
------------------------------------------------  
| static | static | dynamic | dynamic | guided |  
|    1   |    5   |    1    |    5    |        |  
------------------------------------------------  
|    0   |    0   |    0    |    2    |    1   |  
|    1   |    0   |    3    |    2    |    1   |  
|    2   |    0   |    3    |    2    |    1   |  
|    3   |    0   |    3    |    2    |    1   |  
|    0   |    0   |    2    |    2    |    1   |  
|    1   |    1   |    2    |    3    |    3   |  
|    2   |    1   |    2    |    3    |    3   |  
|    3   |    1   |    0    |    3    |    3   |  
|    0   |    1   |    0    |    3    |    3   |  
|    1   |    1   |    0    |    3    |    2   |  
|    2   |    2   |    1    |    0    |    2   |  
|    3   |    2   |    1    |    0    |    2   |  
|    0   |    2   |    1    |    0    |    3   |  
|    1   |    2   |    2    |    0    |    3   |  
|    2   |    2   |    2    |    0    |    0   |  
|    3   |    3   |    2    |    1    |    0   |  
|    0   |    3   |    3    |    1    |    1   |  
|    1   |    3   |    3    |    1    |    1   |  
|    2   |    3   |    3    |    1    |    1   |  
|    3   |    3   |    0    |    1    |    3   |  
------------------------------------------------  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)