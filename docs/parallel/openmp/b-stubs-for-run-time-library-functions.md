---
description: 'Altre informazioni su: B. stub per le funzioni della libreria run-time'
title: B. Stub per funzioni della libreria di runtime
ms.date: 01/22/2019
ms.assetid: fdfdabe0-f678-4551-80d5-827b62354427
ms.openlocfilehash: e6ccb4e03d9fc74eede80f035090a814d7669918
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342517"
---
# <a name="b-stubs-for-run-time-library-functions"></a>B. Stub per funzioni della libreria di runtime

In questa sezione vengono forniti gli stub per le funzioni della libreria di runtime definite nell'API OpenMP C e C++. Gli stub vengono forniti per consentire la portabilità su piattaforme che non supportano l'API OpenMP C e C++. Su queste piattaforme, i programmi OpenMP devono essere collegati a una libreria che contiene queste funzioni stub. Le funzioni Stub presuppongono che le direttive nel programma OpenMP vengano ignorate. Di conseguenza, emulano la semantica seriale.

> [!NOTE]
> È necessario accedere alla variabile di blocco visualizzata nelle funzioni di blocco esclusivamente tramite queste funzioni. Non deve essere inizializzata o modificata in altro modo nel programma utente. Gli utenti non devono fare supposizioni sui meccanismi utilizzati dalle implementazioni OpenMP C e C++ per implementare i blocchi in base allo schema utilizzato dalle funzioni stub.

## <a name="code"></a>Codice

```cpp
#include <stdio.h>
#include <stdlib.h>
#include "omp.h"
#ifdef __cplusplus
extern "C" {
#endif

void omp_set_num_threads(int num_threads)
{
}
int omp_get_num_threads(void)
{
    return 1;
}
int omp_get_max_threads(void)
{
    return 1;
}
int omp_get_thread_num(void)
{
    return 0;
}
int omp_get_num_procs(void)
{
    return 1;
}
void omp_set_dynamic(int dynamic_threads)
{
}
int omp_get_dynamic(void)
{
    return 0;
}
int omp_in_parallel(void)
{
    return 0;
}
void omp_set_nested(int nested)
{
}
int omp_get_nested(void)
{
    return 0;
}
enum {UNLOCKED = -1, INIT, LOCKED};
void omp_init_lock(omp_lock_t *lock)
{
    *lock = UNLOCKED;
}
void omp_destroy_lock(omp_lock_t *lock)
{
    *lock = INIT;
}
void omp_set_lock(omp_lock_t *lock)
{
    if (*lock == UNLOCKED)
    {
        *lock = LOCKED;
    }
    else
        if (*lock == LOCKED)
        {
         fprintf_s(stderr, "error: deadlock in using lock variable\n");
         exit(1);
        } else {
         fprintf_s(stderr, "error: lock not initialized\n");
         exit(1);
        }
}

void omp_unset_lock(omp_lock_t *lock)
{
    if (*lock == LOCKED)
    {
        *lock = UNLOCKED;
    }
    else
        if (*lock == UNLOCKED)
        {
            fprintf_s(stderr, "error: lock not set\n");
            exit(1);
        } else {
            fprintf_s(stderr, "error: lock not initialized\n");
            exit(1);
        }
}

int omp_test_lock(omp_lock_t *lock)
{
    if (*lock == UNLOCKED)
    {
        *lock = LOCKED;
        return 1;
    } else if (*lock == LOCKED) {
        return 0;
    } else {
        fprintf_s(stderr, "error: lock not initialized\n");
        exit(1);
    }
}

#ifndef OMP_NEST_LOCK_T
typedef struct {  // This really belongs in omp.h
    int owner;
    int count;
} omp_nest_lock_t;
#endif
enum {MASTER = 0};
void omp_init_nest_lock(omp_nest_lock_t *lock)
{
    lock->owner = UNLOCKED;
    lock->count = 0;
}
void omp_destroy_nest_lock(omp_nest_lock_t *lock)
{
    lock->owner = UNLOCKED;
    lock->count = UNLOCKED;
}

void omp_set_nest_lock(omp_nest_lock_t *lock)
{
    if (lock->owner == MASTER && lock->count >= 1)
    {
        lock->count++;
    } else
        if (lock->owner == UNLOCKED && lock->count == 0)
        {
            lock->owner = MASTER;
            lock->count = 1;
        } else
        {
       fprintf_s(stderr, "error: lock corrupted or not initialized\n");
         exit(1);
    }
}

void omp_unset_nest_lock(omp_nest_lock_t *lock)
{
    if (lock->owner == MASTER && lock->count >= 1)
    {
        lock->count--;
        if (lock->count == 0)
        {
            lock->owner = UNLOCKED;
        }
    } else
        if (lock->owner == UNLOCKED && lock->count == 0)
        {
            fprintf_s(stderr, "error: lock not set\n");
            exit(1);
        } else
        {
       fprintf_s(stderr, "error: lock corrupted or not initialized\n");
       exit(1);
    }
}

int omp_test_nest_lock(omp_nest_lock_t *lock)
{
    omp_set_nest_lock(lock);
    return lock->count;
}

double omp_get_wtime(void)
{
    // This function does not provide a working
    // wallclock timer. Replace it with a version
    // customized for the target machine.
    return 0.0;
}

double omp_get_wtick(void)
{
    // This function does not provide a working
    // clock tick function. Replace it with
    // a version customized for the target machine.
    return 365. * 86400.;
}

#ifdef __cplusplus
}
#endif
```
